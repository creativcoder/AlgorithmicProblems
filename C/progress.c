#include <stdio.h>
#include <stdbool.h>

int main()
{
	int i=0,j;
	char ar[5] = {'/', '-', '\\', '|'};
	while(true)
	{
		for(j=0;j<23000;j++);
		printf ("%c\r", ar[i%7]);	
		i++;
	}
	return 0;
}
