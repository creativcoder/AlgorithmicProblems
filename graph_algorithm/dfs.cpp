#include <iostream>
#include <vector>
using namespace std;

class Node {
    public:
    int data;
    bool visited;
    vector<Node> adj;
    Node(int d) {
    visited = false;
    data = d;
    }
};

class Graph {
    public:
    vector<Node> G;
    int N;
    Graph(int n_nodes)
    {
        N = n_nodes;
    }
    void add_nodes(){
        int data;
        for(int i=0;i<N;i++)
        cout<<"Enter node data"<<i<<endl;
        cin>>data;

        G.push_back(Node(data));
    }
    void add_edge(int id,Node which)
    {

        G.push_back(which);
    }
};


int main()
{
    Graph my_graph(5);
    my_graph.add_nodes();
    return 0;
}
