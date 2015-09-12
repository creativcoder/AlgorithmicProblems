#include <iostream>

using namespace std;

int graph[5][5]={0};
int discovered[5] = {0};

void add_weight(int u,int v,int w) {
graph[u][v] = w;

}

void visit_graph(int start_node) {
    discovered[start_node] = 1;
    if(start_node==5) return;
    for(int i=0;i<5;i++)
    {
        if(graph[start_node][i]!=0)
            {
            cout<<"Discovered connection of: "<<start_node<<" at "<<i<<" with weight "<<graph[start_node][i]<<endl;
            visit_graph(i);
            }
    }

}

int main()

{   int inp;

    int u,v,w;
   /* while(inp!=-1)
    {
    cout<< "Enter the vertex pair with weigths";
    cin>>u>>v>>w;
    add_weight(u,v,w);
    cout<<"\nEnter -1 to exit when done adding weights";
    cin>>inp;
    } */
    add_weight(0,1,2);
    add_weight(0,2,0);
    add_weight(0,3,1);
    add_weight(1,0,0);
    add_weight(1,3,6);
    add_weight(1,4,0);
    add_weight(2,0,3);
    add_weight(3,0,0);
    add_weight(3,1,0);
    add_weight(3,4,0);
    add_weight(1,3,6);
    add_weight(4,1,7);
    add_weight(4,3,0);

    for(int i=0;i<5;i++)
    {for(int j=0;j<5;j++){
    cout<<graph[i][j]<<",";
    }
    cout<<endl;
    }
    
    visit_graph(0);
    cout<<endl;
    
    cout<<"The discovered nodes are : ";
    for(int i=0;i<5;i++)
    {   if(discovered[i])
    cout<<i<<",";}

    return 0;
}
