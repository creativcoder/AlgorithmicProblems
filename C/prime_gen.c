#include <iostream>
#include<string.h>
#define MAX 10000
using namespace std;
void prime_gen(int m,int n)
{
    unsigned long int str[MAX];
    memset(str,0,sizeof(int)*MAX);
    for(int i=2;i<MAX;i++)
    {
        if(str[i]==0)
        {
            for(int j=i*i;j<MAX;j+=i)
            {
                str[j]=1;
            }
        }

    }
    for(int k=(m>2?m:2);k<=n;k++)
    {if(str[k]==0)
    {
        cout<<k<<endl;
    }
    }

}

int main() {
    int t,m,n;
    cin>>t;

    while(t--)
    {
        cin>>m>>n;
        prime_gen(m,n);
    }
    return 0;
}
