#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(string s, int i, string x)
{
    if(i==s.length())
    {
        cout << x << " ";
        return;
    }
    solve(s, i+1, x+s[i]);
    solve(s, i+1, x+"_");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        
        vector<string> res;
        solve("abc", 0, "");
    }
    
    return 0;
}