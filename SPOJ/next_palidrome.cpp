#include <iostream>
#include<math.h>
using namespace std;

int isPalin(long long n)
{
    long long orig=n;
    long long rev=0;
    long long digits=log10(n);
    while(n!=0)
    {
    int digit=n%10;
    rev+=digit*pow(10,digits);
    digits--;
    n/=10;
    }
    return orig==rev?1:0;

}

int main()
{
    int t;
    long long n;
    cin>>t;
    while(t--)
    {
    cin>>n;
    while(!isPalin(++n));
    cout<<n<<endl;
    }
   
    return 0;
}
