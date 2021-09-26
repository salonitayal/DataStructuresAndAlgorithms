#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<string> v{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
vector<string> solve(string s, int i)
{
    if(i==s.length())
    {
        vector<string> tmp; 
        tmp.push_back("");
        return tmp;
    }
    vector<string> codes = solve(s, i+1);     // 234(34) {dg, dh, di .....}
    vector<string> res;             // if(i==2)res{g, h, i}; i==1?res{d+{g, h, i}, e+{g, h, i}....}
    for(int j=0; j<v[s[i]-'0'].size(); j++)
    {
        
        string k = "";
        k += v[s[i]-'0'][j];
        for(auto itr:codes)
        res.push_back(k + itr);
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        vector<string> ans = solve("234", 0);
        for(auto i:ans)cout << i << " ";
    }
    
    return 0;
}