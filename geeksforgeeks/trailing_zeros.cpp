#include<stdio.h>
using namespace std;

int main()
{   long long m=9900000;
    int cnt=0;
    while(m&1!=0)
    {
        m=m>>1;
        ++cnt;
    }
    printf("\nnumber of zeros is %d",cnt);
    return 0;
}
