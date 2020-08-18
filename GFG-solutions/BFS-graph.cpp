#include<bits/stdc++.h>
using namespace std;

void bfs(int s, vector<int> adj[], bool vis[], int v)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;

    while(!q.empty())
    {
        int node = q.front();
        cout << node << " ";
        q.pop();

        for(auto i : adj[node])
        {
            if(vis[i] == false)
            {
                vis[i] = true;
                q.push(i);
            }
        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int v, e;
        cin >> v >> e;
        vector<int> adj[v];
        bool vis[v] = {false};

        for(int i=0; i<e; i++)
        {
            int a, b; 
            cin >> a >> b;
            // if its directed graph
            adj[a].push_back(b);
        }
        bfs(0, adj, vis, v);
        cout << endl;
    }
}