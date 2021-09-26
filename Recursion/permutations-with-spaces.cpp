#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<string> res;
void solve(string s, int i, string x)
{
    if(i==s.length())
    {
        res.push_back(x);
        return;
    }
    solve(s, i+1, x+' '+s[i]);
    solve(s, i+1, x+s[i]);

}
vector<string> permutation(string S){
    string x = "";
    x+=S[0];
    solve(S, 1, x);
    return res;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    vector<string> ans = permutation(s);
    for(auto i:ans)cout << i << endl;
    return 0;
}