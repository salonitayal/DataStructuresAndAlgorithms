#include<bits/stdc++.h>
using namespace std;

bool cyclic(vector<int> adj[], vector<int>&visited, vector<int>&visited_stack, int v)
{
    if(visited[v] == 1 && visited_stack[v] == 1)
        return true;

    visited[v] = 1;
    visited_stack[v] = 1;
    for(int i=0; i<adj[v].size(); i++)
    {
        if(cyclic(adj, visited, visited_stack, adj[v][i]))
            return true;
    }
    visited_stack[v] = 0;
    return false;
}

bool isCyclic(int v, vector<int> adj[])
{
    vector<int> visited(v, 0);
    for(int i=0; i<v; i++)
    {
        if(visited[i] == 0)
        {
            vector<int> visited_stack(v, 0);
            if(cyclic(adj, visited, visited_stack, i))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int t; cin >>t;
    while(t--)
    {
        int v, e; 
        cin >> v >> e;
        vector<int> adj[v];

        for(int i=0; i<e; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        cout << isCyclic(v, adj) << endl;
    }
    return 0;
}