#include<bits/stdc++.h>

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    // Write your code here.

    vector<int> res;

    // adj is adjacency list
    // n is number of nodes

    // Steps

    // Step 1 -> create a map for knowing if a node is visited or not
    unordered_map<int,bool> isVisited;

    for(int i=0; i<n; i++){
        isVisited[i] = false;
    }

    // Step 2 -> create a queue

    queue<int> q;
    q.push(0);

    // Step 3 -> while poping out of the queue we run the while loop
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        if(!isVisited[frontNode]){
            isVisited[frontNode] = true;
            res.push_back(frontNode);
            for(auto i:adj[frontNode]){
                q.push(i);
            }
        }
    }

    return res;

}
