#include <stdio.h>
#include <stdlib.h>

#include <netdb.h>
#include <netinet/in.h>
#include <string.h>

int main(int argc, char *argv) {
	int sock_fd, client_connection, port_no, cli_len;
	struct sockaddr_in serv_addr, cli_addr;
	int bytes_read;
	char *buffer = (char*)malloc(sizeof(char)*256);

	sock_fd = socket(AF_INET, SOCK_STREAM, 0);

	if (sock_fd < 0) {
		perror("Error opening socket");
		exit(1);
	}

	bzero((char *) &serv_addr, sizeof(serv_addr));
	port_no = 5001;
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = INADDR_ANY;
	serv_addr.sin_port = htons(port_no);

	if (bind(sock_fd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
		perror("ERROR on binding");
      	exit(1);
	}

	listen(sock_fd,5);
	cli_len = sizeof(cli_addr);
	client_connection = accept(sock_fd, (struct sockaddr *)&cli_addr, &cli_len);

	if (client_connection < 0) {
      perror("ERROR on accept");
      exit(1);
   }
   bzero(buffer,256);
   bytes_read = read(client_connection, buffer, 255);

   if (bytes_read < 0) {
      perror("ERROR reading from socket");
      exit(1);
   }

   printf("Msg: %s\n", buffer);
   bytes_read = write(client_connection, "ACK", 3);

   if (bytes_read < 0) {
      perror("ERROR writing to socket");
      exit(1);
   }
}
