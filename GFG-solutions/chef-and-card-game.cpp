
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll getsum(ll n)
{
    ll s = 0;
    while(n > 0)
    {
        s += n%10;
        n = n/10;
    }
    return s;
}

int main()
{
    int t; cin >> t; 
    while(t--)
    {
        ll n; cin >> n; 
        ll c = 0, m = 0;
        while(n--)
        {
            ll x, y;
            cin >> x >> y;
            if(getsum(x) > getsum(y))++c;
            else if(getsum(x) < getsum(y))++m;
            else 
            {
                ++c, ++m;
            }
        }
        if(c > m)cout << 0 << " " << c;
        else if(c < m) cout << 1 << " " << m;
        else cout << 2 << " " << c;
        cout << endl;
    }
    return 0;
}