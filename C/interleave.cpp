# Printing all possible interleaved strings out of two strings

#include <iostream>
#include <stdio.h>
#include <malloc.h>
#include <string.h>

using namespace std;

void interleave(char *str1,char *str2,char *str,int len)
{
    
}

int main()
{   char *str1="AB";
    char *str2="CD";
    int len = strlen(str1)+strlen(str2);
    char *str= (char*)malloc(sizeof(char)*(len+1));
    memset(str,0,len+1);
    interleave(str1,str2,str,len);
    return 0;
}
