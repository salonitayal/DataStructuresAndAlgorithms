#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<char> v = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',  'j', 'k', 'l',
                'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
void printEncodings(string s, string res)
{
    if(s == "")
    {
        cout << res << " ";
        return;
    }
    if(s[0] != '0')
    {
        printEncodings(s.substr(1), res + v[(s[0]-'0')-1]);
        if(s.substr(0, 2) <= "25")
            printEncodings(s.substr(2), res + v[stoi(s.substr(0, 2))-1]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        printEncodings(s, "");
        cout << endl;
    }
    
    return 0;
}