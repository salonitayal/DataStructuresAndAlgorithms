#include<bits/stdc++.h>
using namespace std;

bool bfs(int s, vector<int> adj[], bool vis[], int V)
{
    queue<int> q;
    int parent[V] = {-1};
    vis[s] = true;
    q.push(s);

    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        for(int i=0; i<adj[node].size(); i++)
        {
            if(node == adj[node][i])return true; //self cycle
            parent[adj[node][i]] = node;

            if(vis[adj[node][i]] == true && adj[node][i] != parent[node])
                return true;

            if(vis[adj[node][i]] == false)
            {
                vis[adj[node][i]] = true;
                q.push(adj[node][i]);
            }    

            
        }
    }
    return false;
}


bool isCyclic(vector<int> adj[], int V)
{
    for(int i=0; i<V; i++)
    {
        bool vis[V] = {false};
        if(bfs(i, adj, vis, V))
            return true;
    }
    return false;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;
        
        // array of vectors to represent graph
        vector<int> adj[V];
        
        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            
            // adding edge to the graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cout << isCyclic(adj, V)<<endl;
    }
}
