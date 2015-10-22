// Does naive addition of n bit numbers (handy for very large numbers)
#include<iostream>
#define dig 5

using namespace std;

int table[3][dig+1] = {{0}};

void add_num() {
int carry = 0;
for(int i=dig-1;i>=0;i--)
{
int cache = table[0][i] + table[1][i];
table[2][i] += (cache)%10 + carry;
if(cache > 9) carry=1; else carry=0;
}
cout<<"Result: "<<carry;
for(int i=0;i<dig;i++)
cout<<table[2][i];
}

int main() {
cout<<"First Number";
for(int i=0;i<dig;i++)
cin>>table[0][i]>>table[1][i];
add_num();
return 0;
}
