#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,len=0;

    char str[100];

    fscanf(stdin,"%[^\n]",str);

    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }

        for(i=0;i<len;i++)
        {
            if(str[i]!=' '&&str[i+1]==' ')
            {
                printf("%c%c",str[i],str[i+1]);
            }
            else if(str[i]==' '&&str[i]==' ')
                continue;
            else if(str[i]!=' ')
            printf("%c",str[i]);
        }
return 0;
    }


