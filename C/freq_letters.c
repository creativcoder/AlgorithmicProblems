#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define f(x,a,b) for(x=a;x<b;x++)
// structure to hold the frequency of characters
struct freq_dis
{
    char c;
    int freq;
};
// the normalize function is used to cast characters to lower case in string
void normalize(char *str)
{   int i;

    for(i=0;str[i]!='\0';i++)
    {
        str[i]=tolower(str[i]);
    }
}


int main()
{   int i;
    char str[]="The enigma machine was any of several electro-mechanical rotor cipher machines used in the twentieth century for enciphering and desciphering secret messages.Enigma was invented by German engineer Arthur Scherbius at the end of World War 1";
    normalize(str);
    struct freq_dis s[26];
    f(i,0,26)
    {
        s[i].c=i+'a';
        s[i].freq=0;
    }

    for(i=0;i<strlen(str);i++)
    {
        s[((int)str[i]%97)].freq++;
    }

    for(i=0;i<26;i++)
    {
        printf("%c\t%d\n",s[i].c,s[i].freq);
    }

    return 0;
}
