#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int sm=0;
        for(int i=0; s[i]; i++)
            sm += (s[i]-'a'+1);
        (sm&1)?cout << "NO":cout << "YES";
        cout << endl;
    }
    return 0;
}