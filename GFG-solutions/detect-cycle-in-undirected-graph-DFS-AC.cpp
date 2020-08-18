// #include<bits/stdc++.h>
// using namespace std;

// bool isCyclic(vector<int> adj[], int v)
// {
//     vector<int> vis(v, 0);
//     stack<int> st;
//     st.push(0); 
//     vis[0] = 1;
//     int par[v] = {-1}, c = 0, flag;

//     while(!st.empty())
//     {
//         int node = st.top();
//         flag = 0;
//         int i;

//         for(i=0; i<adj[node].size(); i++)
//         {
//             if(vis[adj[node][i]] != 1)
//             {
//                 vis[adj[node][i]] = 1;
//                 st.push(adj[node][i]);
//                 flag = 1;
//                 break;
//             }
//             else 
//             {
//                 if((par[i] != adj[node][i]) && vis[adj[node][i]] == 1)
//                     return true;
//             }
//         }
//         par[i] = node;
//         if(flag == 0)st.pop();
//     }
//     return false;
// }

// int main()
// {
//     int t; cin >>t;
//     while(t--)
//     {
//         int v, e; 
//         cin >> v >> e;
//         vector<int> adj[v];

//         for(int i=0; i<e; i++)
//         {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }

//         cout << isCyclic(adj, v) << endl;
//     }
//     return 0;
// }




/* This function is used to detect a cycle in undirected graph
*  adj[]: array of vectors to represent graph
*  V: number of vertices
*/
/* Author: Shiv Warsi
NATIONAL INSTITUTE OF TECHNOLOGY, SILCHAR (IN)
This code just has the working isCyclic() function.

bool isCyclic(vector<int> adj[], int V)
{
   // Your code here
   int vis[V], pred[V];
   memset(pred, -1, sizeof(pred));
   memset(vis, 0, sizeof(vis));
   int u;
   stack<int> s;
   for(int i=0; i<V; i++){
       if(!vis[i]){
           s.push(i);
           while(!s.empty()){
               u = s.top();
               s.pop();
               vis[u] = 1;
               for(auto v:adj[u]){
                   int chk = 0;
                    if(!vis[v]){
                        pred[v] = u;
                        s.push(v);
                        for(auto j:adj[v]){
                            if(vis[j] && j!=pred[v]){ //loops with more than 2
                                return true; 
                            }
                            if(j==pred[v]){//loop with 2 nodes only
                                chk++;
                                if(chk > 1)
                                return true;
                            }
                        }
                    }
                    else{//self loops
                        if(v == u)
                            return true;
                    }
                }
           }
        }
   }
   return false;
}*/

bool dfs(int i,bool visited[] , vector<int> adj[], int prev ){
    
    visited[i]=1;
    
    for(auto it=adj[i].begin();it!=adj[i].end();it++){
         if(!visited[*it]){
            if(dfs(*it,visited,adj,i))
                return true;    //BRACKETS nhi lagane par wrong answer , lagane par sahi answer
        }
        else if((*it!=prev)) return true;
    }
  
    return false;
}

bool isCyclic(vector<int> adj[],int v){
  
  bool  visited[v];
  memset(visited,0,sizeof(visited));
  for(int i=0;i<v;i++){
      if(!visited[i] && dfs(i,visited,adj,-1)) return 1;
  }
  
    return 0;
}