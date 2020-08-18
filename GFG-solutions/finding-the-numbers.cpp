#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    ll n; cin >> n; 
	    ll a[2*n + 2];
	    map <ll, ll> m; 
	    
	    for(ll i=0; i < 2*n+2; i++)
	    {
	        cin >> a[i];
	        ++m[a[i]];
	    }
	    for(auto i : m)
	    {
	        if(i.second % 2 != 0)
	            cout << i.first << " ";
	    }
	    cout << endl;
	}
	return 0;
}