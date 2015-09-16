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

        for(int i=0;i<N;i++)
            {   Node n(i);
            G.push_back(n);

            }
    }

    void add_edge(int src,int dst)
    {
        G[src].adj.push_back(G[dst]);
        cout<<"Added node"<<endl;
    }

    void dfs_traverse(Node startNode) {
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
       cout<<"Visited node: "<<current.adj[i].data;
       }
    }
    }
}
};


int main()
{
    int V,E;
    int src,dst;
    cout<<"Vertex Count";
    cin>>V;
    cout<<"Edge Count";
    cin>>E;
    Graph my_graph(V);
    cout<<"Graph Initialized with: "<<V<<" vertices"<<endl;
    my_graph.add_nodes();


    for(int i=0;i<E;i++){
    cout<<"Input : Source -> Destination"<<endl;
    cin>>src>>dst;
    my_graph.add_edge(src,dst);
    }

    //cout<<my_graph.G[0].adj[];
    my_graph.dfs_traverse(my_graph.G[1]);

    return 0;
}
