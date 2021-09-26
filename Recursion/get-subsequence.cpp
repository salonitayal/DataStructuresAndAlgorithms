#include<bits/stdc++.h>
using namespace std;

vector<string> res;
void getSub(string s, int i, string x)
{
    if(i == s.length())
    {
        res.push_back(x);
        return;
    }
    getSub(s, i+1, x+s[i]);
    getSub(s, i+1, x);
}

int main(){
    string s; cin >> s;
    getSub(s, 0, "");
    for(auto i:res)cout << i << " ";
    cout << endl;
}
    