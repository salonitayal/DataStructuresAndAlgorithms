#include<bits/stdc++.h>
using namespace std;

bool cyclic(int v, vector<int> adj[])
{
    int vis[v];
    memset(vis, -1, sizeof(vis));
    stack<int> st;
    st.push(0);

    int flag;

    vis[0] = 0;

    while(!st.empty())
    {
        int node = st.top();
        flag = 0;

        for(int i=0; i<adj[node].size(); i++)
        {
            if(vis[adj[node][i]] == -1)
            {
                st.push(adj[node][i]);
                ++vis[adj[node][i]];
                flag = 1;
                break;
            }
            else if(vis[adj[node][i]] == 0)
                return true;
        }
        if(flag == 0)
        {
            vis[st.top()] = 1;
            st.pop();
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

        cout << cyclic(v, adj) << endl;
    }
    return 0;
}