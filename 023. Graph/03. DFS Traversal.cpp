#include<bits/stdc++.h>
void dfs(unordered_map<int, list<int>> &adj, unordered_map<int,bool> &visited, 
            int node, vector<int>&component)
{
    component.push_back(node);
    visited[node]=true;

    for(auto i:adj[node])
    {
        if(!visited[i])
        {
            dfs(adj, visited, i,component);
        }
    }

}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // prepare adjancy list
    unordered_map<int, list<int>>adj;
    for(int i=0;i<edges.size();i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        //undirected
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<int>> ans;
    unordered_map<int, bool> visited;

    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }

    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        {
            vector<int>component;
            dfs(adj, visited, i, component);
            ans.push_back(component);
        }
    }

    return ans;
}
