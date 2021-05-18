#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        ll a[n];
        for(ll i=0; i<n; i++)cin >> a[i];
        sort(a, a+n);
        ll x = a[0], z = a[n-1];
        ll ans = abs(z-x), max = 0;
        
        for(ll i=1; i<n-1; i++)
            if((abs(x-a[i]) + abs(z-a[i])) > max)
                max = abs(x-a[i]) + abs(z-a[i]);
                
        ans += max;
        cout << ans << endl;
    }
	return 0;
}
