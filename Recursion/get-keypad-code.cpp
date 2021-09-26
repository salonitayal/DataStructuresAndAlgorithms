#include<bits/stdc++.h>
using namespace std;

vector<string> v {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
vector<string> res;
void solve(string s, int i, string x)
{
    if(s.length() == 0)return;
    if(i == s.length())
    {
        res.push_back(x);
        return;
    }
    int k = s[i]-'0';
    for(int j=0; j<v[k].length(); j++)
    {
        solve(s, i+1, x+v[k][j]);
    }
}
vector<string> letterCombinations(string digits) {
    solve(digits, 0, "");
    return res;
}

int main(){
    string s; cin >> s;
    vector<string> ans = letterCombinations(s);
    for(auto i:ans)cout << i << " ";
    cout << endl;
}
    