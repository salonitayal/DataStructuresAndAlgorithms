#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    ll sm=0;
    while(n--)
    {
        ll x; cin >> x;
        sm = (sm+x+1000000007)%1000000007;
    }
    ll q; cin >> q;
    while(q--)
    {
        ll x; cin >> x;
        sm += sm;
        sm = sm%1000000007;
        cout << sm << endl;
    }
    return 0;
}