#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
template <typename T>

class graph
{
    public:
    unordered_map <T, list<T> >adj;

    void addEdge(T u,T v,bool direction)
    {
        //direction=0: undirected
        //direction=1: directed

        adj[u].push_back(v);

        if(direction==0)
        {
            adj[v].push_back(u);
        }
    }

    void print()
    {
        for(auto i:adj )
        {
            cout<< i.first <<"->";
            for(auto j: i.second)
            {
                cout<< j <<" , ";
            }
            cout<<endl;
        }
    }



};

int main()
{
    int n;
    cout<<"enter no. of nodes: ";
    cin>>n;

    int m;
    cout<<"enter no. of edges: ";
    cin>>m;

    graph <int> g;

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }


    g.print();
    return 0;
}




/*
enter no. of nodes: 5
enter no. of edges: 6
0 1
1 2
2 3
3 1
4 2
3 4
4->2 , 3 , 
3->2 , 1 , 4 , 
2->1 , 3 , 4 , 
1->0 , 2 , 3 , 
0->1 , 
*/
