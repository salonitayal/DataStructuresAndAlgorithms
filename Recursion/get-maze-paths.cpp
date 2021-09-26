#include<bits/stdc++.h>
using namespace std;

vector <string> getMazePaths(int sr, int sc, int dr, int dc) {
    if(sr == dr && sc == dc)
    {
        vector<string> tmp;
        tmp.push_back("");
        return tmp;
    }
    if(sr > dr || sc > dc)
    {
        vector<string> tmp;
        return tmp;
    }
    
    vector<string> hpath = getMazePaths(sr, sc+1, dr, dc);
    vector<string> vpath = getMazePaths(sr+1, sc, dr, dc);
    vector<string> tpaths;
    
    for(auto i:hpath)tpaths.push_back('h'+i);
    for(auto i:vpath)tpaths.push_back('v'+i);
    
    return tpaths;
}


int main()
{
    int n, m; cin >> n >> m;
    vector<string> ans = getMazePaths(1, 1, n, m);
    for(auto i:ans)cout << i << " ";
}   