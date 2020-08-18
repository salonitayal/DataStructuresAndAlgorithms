#include<bits/stdc++.h>
using namespace std;

void dfs(int s, vector<int> g[], bool vis[])
{
    
    stack<int> st;
    st.push(s);
    cout << s << " ";
    vis[s] = true;

    while(!st.empty())
    {
        int node = st.top();
        int flag = 0;
        
        for(int i=0; i < g[node].size(); i++)
        {
            if(vis[g[node][i]] == false)
            {
                //vis[i] = true;
                st.push(g[node][i]);
                cout << g[node][i] << " ";
                vis[g[node][i]] = true;
                flag = 1;
                break;
            }
        }
        if(!flag)st.pop();
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
        dfs(0, adj, vis);
        cout << endl;
    }
}