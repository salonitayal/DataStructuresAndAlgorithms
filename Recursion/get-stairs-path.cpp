#include<bits/stdc++.h>
using namespace std;

vector<string> getStairsPath(int n)
{
    if(n == 0)
    {
        vector<string> tmp;
        tmp.push_back("");
        return tmp;
    }
    if(n < 0)
    {
        vector<string> tmp;
        return tmp;
    }
    vector<string> path1 = getStairsPath(n-1);
    vector<string> path2 = getStairsPath(n-2);
    vector<string> path3 = getStairsPath(n-3);
    vector<string> paths;
    
    for(auto i:path1)paths.push_back('1'+i);
    for(auto i:path2)paths.push_back('2'+i);
    for(auto i:path3)paths.push_back('3'+i);
    
    return paths;
}

int main()
{
    int n; cin >> n;
    vector<string> ans = getStairsPath(n);
    for(auto i:ans)cout << i << " ";
}   