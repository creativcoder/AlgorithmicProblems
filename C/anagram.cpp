
#include<stdio.h>
#include<string.h>
int isAnagram(char s[],char d[])
{
    int i;

    int chk1[256]={0};

    for(i=0;s[i] && d[i];i++)
    {
        chk1[s[i]]++;
        chk1[d[i]]--;
    }
    //cheking if the two strings are of different lengths
    if(s[i]||d[i])
    {
        return 0;
    }
    //checking for all zero values in 'chk' array
    for(i=0;i<256;i++)
    {
        if(chk1[i])
            return 0;
    }
return 1;
}

int main()
{
    char str2[]="anagram";
    char str1[]="gramaan";

printf("%d\n",isAnagram(str1,str2) );
}
