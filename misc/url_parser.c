#include <stdio.h>

int main(void)
{
    const char text[] = "http://192.168.0.2:8888/foo/bar";
    char ip[100];
    int port = 80;
    char page[100];
    sscanf(text, "http://%99[^:]:%99d/%99[^\n]", ip, &port, page);
    printf("ip = \"%s\"\n", ip);
    printf("port = \"%d\"\n", port);
    printf("page = \"%s\"\n", page);
    return 0;
}
