// Removes extra whitespace from a string in a linear scan of the array;

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "   This    is  a string               which       has very    much spaces in   it.";
    
    for(int i=1;i<s.length();i++)
    {
        if(s[i-1]!=' ' && s[i]==' ')
            {cout<<s[i-1]<<s[i];}
        else if(s[i-1]==' ' && s[i]==' ')
            continue;
        else if(s[i-1]!=' ')
            cout<<s[i-1];
    }
    
}
