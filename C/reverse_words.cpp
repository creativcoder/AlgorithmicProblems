#include <iostream>
#include <string.h>
#include <stack>

using namespace std;


int main()
{
    char str[80] = "This is a sentence to reverse";
    const char s[2] = " ";
    char *token;
    token = strtok(str, s);
    stack<char*> st;
    while( token != NULL )
    {
        st.push(token);
        token = strtok(NULL, s);
    }
    while(!st.empty()) {
    cout<<st.top()<<" ";
    st.pop();
    }

   return(0);
}
