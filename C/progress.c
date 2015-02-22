#include <stdio.h>

int main()
{
   int i=0,j;
   char elem[]={'|','/','--','\\'};
   while(1)
   {
       printf("%c\r",elem[i++]);
       i%=4;
       for(j=0;j<40000000;j++);
   }
    return 0;
}
