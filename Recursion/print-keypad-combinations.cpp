#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<string> v{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void solve(string s, int i, string x)
 {
    if(i==s.length())
    {
        cout << x << " ";
        return;
    }
    for(int j=0; j<v[s[i]-'0'].size(); j++)
        solve(s, i+1, x + v[s[i]-'0'][j]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        solve(s, 0, "");
    }
    
    return 0;
}