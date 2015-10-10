#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "convert.h"

const char *ERR_NO_ARGS= "Error: No arguments found Use --help";
const char *ERR_ARGS_PARSE = "Error parsing arguments";
const char *USAGE = "Enter arguments in this sequence : basex <number> <from> <to>";

int main(int argc, char const *argv[])
{
	if(argc<2){
		fprintf(stderr, "%s\n",ERR_NO_ARGS);
		return -1;
	}
	else if(!strcmp(argv[1],"--help")) {
			fprintf(stdout, "%s\n",USAGE);
		return -3;
	}

	long int to_convert = atoi(argv[1]);
	long int from = atoi(argv[2]);
	long int to = atoi(argv[3]);
	
	if(!(to && from && to_convert)) {
		fprintf(stderr, "%s\n",ERR_ARGS_PARSE);
		return -2;
	}
	else {
		//convert_base(to_convert,from,to);
	}
	return 0;
}