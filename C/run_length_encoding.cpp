#include <iostream>
using namespace std;

void run_encode(string message)
{   int i=0,j,cnt=0;
    while(i!=message.length())
    {

        j=i;
        while(message[i]==message[j])
        {cnt++;j++;}
        if (cnt==1) {cout<<message[i];}else
        cout<<cnt<<message[i];
        i=j;
        cnt=0;
    }
}

void run_decode()
{
    // to implement
}

int main()
{
    // example string 1
    string s = "WWWWWWWVWWWBBBBBBBBBCCCCDDD";
    // example string 2
    string s2 = "WVBCD";
    
    run_encode(s);
    cout<<endl;
    run_encode(s2);

    return 0;
}
