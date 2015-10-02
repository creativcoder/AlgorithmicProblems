// Extracts words from a sentence

#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

vector<char> word;

void extract_words(char words[])
{
    int i=0;
    while(i<=strlen(words)-1) {
        while(words[i]!=' ' && words[i]!='\0')
        {word.push_back(words[i]);i++;}
        for(vector<char>::iterator it=word.begin();it!=word.end();it++)
            cout<<*it;
            cout<<endl;
        word.clear();
        i++;
    }
}

int main()
{
    char *sent = "extract the words";
    extract_words(sent);
    return 0;
}
