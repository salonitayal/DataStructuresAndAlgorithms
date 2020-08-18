#include<bits/stdc++.h>
using namespace std;

bool isCyclic(vector<int> adj[], int v)
{
    vector<int> vis(v, 0);
    stack<int> st;
    st.push(0); 
    vis[0] = 1;
    int par[v] = {-1}, c = 0, flag;

    while(!st.empty())
    {
        int node = st.top();
        flag = 0;
        int i;

        for(i=0; i<adj[node].size(); i++)
        {
            if(vis[adj[node][i]] != 1)
            {
                vis[adj[node][i]] = 1;
                st.push(adj[node][i]);
                flag = 1;
                break;
            }
            else 
            {
                if((par[i] != adj[node][i]) && vis[adj[node][i]] == 1)
                    return true;
            }
        }
        par[i] = node;
        if(flag == 0)st.pop();
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
            adj[v].push_back(u);
        }

        cout << isCyclic(adj, v) << endl;
    }
    return 0;
}