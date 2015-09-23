#include <iostream>
using namespace std;

int arr[50]={0};

void append(int arr[],int pos,int num)
{
arr[pos] = num;
}

void compress(string s )
{
int i=-1,j,cnt=0,ind=-1;
char cur=s[0];
while(i!=s.length()) {
i++;
while(s[i]==cur)
{
cnt++;
s.erase(i,1);
if(s[i] != s[i+1]) break;
}
append(arr,++ind,cnt);
cur=s[i];
cnt=0;
}

for(int i=0;i<s.length();i++)

{   if(arr[i]==0)
    continue;
    cout<<arr[i]<<s[i];
}

}

int main()
{
    string s = "ttttttthhhhhiiiiisssaaaavvvvveeerrryyylooongwwwword";
    compress(s);
    return 0;
}
