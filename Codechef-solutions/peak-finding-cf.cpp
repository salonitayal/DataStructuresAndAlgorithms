#include<iostream>
#include <algorithm>
#define ll long long int
using namespace std;
ll n, m; 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        ll a[n]; 
        ll mx = -1;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            mx = max(mx, x);
        }
        cout << mx << endl;
    }
    return 0;
}