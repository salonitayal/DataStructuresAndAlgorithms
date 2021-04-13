#include<bits/stdc++.h>
using namespace std;

void rec(char s[], int n, int i, vector<string> &v, string tmp){
    if(i == n)
    {
        v.push_back(tmp);
        return;
    }
    rec(s, n, i+1, v, tmp+s[i]);
    rec(s, n, i+1, v, tmp+" "+s[i]);
}
vector<string>  spaceString(char str[])
{
    int n = strlen(str);
    vector<string> v;
    string tmp = "";
    tmp += str[0];  // this is the way to assign char from char array to str object
    rec(str, n, 1, v, tmp);
    return v;
}

int main()
{
    char s[3];
    cin >> s;
    vector<string> ans = spaceString(s);
    for(auto i:ans) cout << i << " ";
}