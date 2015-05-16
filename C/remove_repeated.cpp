// this code prints out the characters in the given string only once, and doesn't print another occurence of that character
#include <iostream>
#include<string.h>
#define CHARS 256
using namespace std;
int main()
{
    string st="banana";
    int ascii[CHARS];
    for(int i=0;i<CHARS;i++)
    {ascii[i]=0;}
    basic_string<char>::iterator iter;
    for(iter=st.begin();iter!=st.end();iter++)
        if(ascii[(int)*iter]==0)
        {
        ascii[(int)*iter]++;
        cout<<*iter;
        }
    return 0;
}
