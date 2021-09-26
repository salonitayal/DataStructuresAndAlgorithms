#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v; cin >> v;   // vertices
    int e; cin >> e;   // edges

    vector<int> adj[v + 1];
    for(int i=0; i<e; i++)
    {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i=1; i<v; i++)
    {
        cout << i << "->";
        for(auto j : adj[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// INPUTS:
// 6
// 8
// 1 2
// 1 3
// 2 4 
// 2 5
// 3 5
// 4 5
// 4 6
// 5 6