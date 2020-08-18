// UNsolved
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const ll mod = 1000000007;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n; 
        string s; cin >> n >> s;
        
        ll q; cin >> q;
        while(q--)
        {
            ll q1, l, r; cin >> q1 >> l >> r;
            if(q1 == 1)
            {
                char s1; cin >> s1;
                if(l < s.length())
                    for(ll i=l; i<=r; i++) 
                        s[i] = s1;
            }
            else 
            {
                ll a, b; cin >> a >> b;
                for(ll i=l; i<=r; i++)
                {
                    if(s[i] == 'A') 
                    {
                        ll a1 = a;
                        a = (a1 - b + mod) % mod;
                        b = (a1 + b) % mod;
                    }
                    else 
                    {
                        ll a1 = a;
                        a = (a1 + b) % mod;
                        b = (b - a1 + mod) % mod;
                    }
                }
                cout << a << " " << b << endl;

            }
        }
    }
    return 0;
}