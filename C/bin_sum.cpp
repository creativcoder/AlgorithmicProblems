#include <iostream>
#include <string.h>
#include <malloc.h>
#include <stdio.h>

using namespace std;

char* pad_str(char a[],int amt)
{
    char *temp = (char *)malloc(sizeof(char)*amt+1);
    int pad_size = amt-strlen(a);
    int i;
    for(i=0;i<pad_size;i++)
    temp[i]= '0';
    strncpy(temp+i,a,strlen(a));
    return temp;
}

int find_null_pos(char *a)
{   int t=0;
while(a[0]!='\0')
{a=a+1;t++;}
return t;
}

char xor_gate(char a,char b)
{
    if(a=='0' && b=='0')
    return '0';
    else if(a=='0' && b=='1')
    return '1';
    else if(a=='1' && b=='0')
    return '1';
    else if(a=='1' && b=='1')
    return '0';
}

void find_sum(char a[],char b[]){
   char carry='0';

   char *result = (char*)malloc(sizeof(char)*(strlen(a)+3));
   for(int i=strlen(a)-1;i>=0;i--)
   {
        if(carry=='1')
        {
        result[(strlen(a)-1)-i] = xor_gate(a[i],b[i]);
        result[(strlen(a)-1)-i] = xor_gate(result[i],carry);
        }
        else {
        result[strlen(a)-i] = xor_gate(a[i],b[i]);
        if(a[i]=='1' && b[i]=='1')
        carry = '1';
        }

        carry = '0';

   }
   cout<<carry<<endl;
   cout<<result[0];
   cout<<result[1];
   cout<<result[2];
   cout<<result[3];
   cout<<result[4];
   cout<<result[5];
}

int main()
{
    char *n1 = "111111";
    char *n2 = "000100";
    char *padded_n1 = pad_str(n1,strlen(n1)>strlen(n2)?strlen(n1):strlen(n2));
    char *padded_n2 = pad_str(n2,strlen(n1)>strlen(n2)?strlen(n1):strlen(n2));
    find_sum(padded_n1,padded_n2);
    return 0;
}
