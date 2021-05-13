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
        int l; cin >> l;
        string s; cin >> s;
        int c0=0, c1=0;
        int flag=1;
        for(int i=0; i<l; i++)
        {
            if(s[i] == '0')++c0;
            else ++c1;
            if(c1>=c0)
            {
                cout << "YES";
                flag=0;
                break;
            }
        }
        if(flag)cout << "NO";
        cout << endl;
    }
    return 0;
}