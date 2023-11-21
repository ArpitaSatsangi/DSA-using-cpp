#include <unordered_map>
#include <list>


bool isCyclicDFS(int node,int parent, unordered_map<int, bool>&visited, unordered_map<int,list<int>>&adj)
{
   
    visited[node] = 1;

    for(auto neighbour: adj[node])
    {
        if(!visited[neighbour])
        {
            bool cyclic = isCyclicDFS(neighbour,node,visited, adj);

            if(cyclic)
                return true;
        }
        else if(neighbour!=parent)
        {
            return true;
        }
    }
    return false;
}


string cycleDetection(vector<vector<int>> &edges, int n, int m) 
{
    // create adjancy list
    unordered_map<int, list<int>> adj;
    for(int i=0;i<m;i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int,bool> visited;
 
    //to handle disconnected graph
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            bool ans = isCyclicDFS(i,-1, visited,adj);
            if(ans==1)
                return "Yes";
        }
    }

    return "No";
}
