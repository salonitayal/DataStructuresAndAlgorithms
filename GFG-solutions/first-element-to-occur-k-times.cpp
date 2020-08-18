#include <iostream>
#include<unordered_map> 
#define ll long long int

using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    ll n, k; cin >> n >> k;
	    ll a[n];
	    unordered_map<ll, ll> um;
	    for(ll i=0; i<n; i++)
	    {
	        cin >> a[i];
	        ++um[a[i]];
	    }
	    ll c = 1;
	    for(ll i=0; i<n; i++)
	    {
	        if(um[a[i]] == k)
	        {
	            cout << a[i] << endl;
	            c = 0;
	            break;
	        }
	    }
	    if(c)cout << -1 << endl;
	}
	return 0;
}