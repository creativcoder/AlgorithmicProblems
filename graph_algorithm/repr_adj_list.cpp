// Adjecency List representation of a directed graph using vector of int

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int V,E;              // V=vertices, E=edges
    cin>>V>>E;
    vector<int> adj[10];
    int s,d;
    for(int i=0;i<E;i++)
    {
    cin>>s>>d;
    adj[s].push_back(d);
    }

    for(int i=1;i<=V;i++)
    for(int j=0;j<adj[i].size();j++)
    {
        if(j==adj[i].size()-1)
        cout<<adj[i][j]<<endl;
        else cout<<adj[i][j]<<" -->";
    }

    return 0;
}
