#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t; cin >> t;
	while(t--)
	{
	    ll n; cin >> n;
	    ll x = n;
	    ll i=0;
	    while(x > 0)
	    {
	        ++i;
	        x /= 2;
	    }
        ll a = pow(2, i-1)-1;
        ll b = a ^ n;
        cout << a*b << endl;
	}
	return 0;
}
