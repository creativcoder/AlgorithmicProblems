#include <iostream>
#include <vector>
#include <stack>

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
        {cout<<"Enter node data"<<i<<endl;
        cin>>data;

        G.push_back(Node(data));}

    }
    void add_edge(int src,int dst)
    {
        G[src].adj.push_back(G[dst]);
        cout<<"Added successfully node: "<<G[src].adj[0].data;
    }
};


void dfs_traverse(Graph G, Node startNode) {
    stack<Node> holder;
    holder.push(startNode);
    startNode.visited = true;
    while(!holder.empty()) {
    Node current = holder.top();
    holder.pop();

    for(int i=0;i<current.adj.size();i++)
    {
       if(!current.adj[i].visited)
      { holder.push(current.adj[i]);
       current.adj[i].visited = true;
       }
    }
    }
}


int main()
{
    Graph my_graph(5);
    my_graph.add_nodes();

    my_graph.add_edge(0,3);
    my_graph.add_edge(2,4);
    my_graph.add_edge(1,4);
    my_graph.add_edge(2,3);



    return 0;
}
