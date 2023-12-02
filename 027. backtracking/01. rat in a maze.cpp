#include <bits/stdc++.h> 

bool isSafe(int x,int y,vector<vector<bool>>&visited, vector < vector < int >> &arr, int n)
{
    if (0 <= x && x < n && 0 <= y && y < n && arr[x][y] == 1 && visited[x][y] != 1) 
    {
        return true;
    }

    else
    {
        return false;
    }
}

void solve(int x,int y,vector < vector < int >> & arr, int n, 
           vector<string> &ans, vector <vector<bool>> &visited, string path) 
{
    //base case
    if(x==n-1 && y==n-1)
    {
        ans.push_back(path);
        return ;
    }

    visited[x][y] =1;
    //4 movements- D L R U

    //down
    if(isSafe(x+1,y,visited,arr,n))
    {
        solve(x+1,y,arr,n,ans,visited,path+'D');
    }

    //left
    if(isSafe(x,y-1,visited,arr,n))
    {
        solve(x,y-1,arr,n,ans,visited,path+'L');
    }

    //right
    if(isSafe(x,y+1,visited,arr,n))
    {        
        solve(x,y+1,arr,n,ans,visited,path+'R');
    }

    //up
    if(isSafe(x-1,y,visited,arr,n))
    {
        solve(x-1,y,arr,n,ans,visited,path+'U');
    }

    visited[x][y] = 0;
}

vector < string > searchMaze(vector < vector < int >> & arr, int n) 
{
    vector <vector<bool>> visited(n,vector<bool>(n,0));
    vector<string> ans;
    string path = "";

    if(arr[0][0]==0)
        return ans;

    solve(0,0,arr,n,ans,visited,path);

    return ans;
}
