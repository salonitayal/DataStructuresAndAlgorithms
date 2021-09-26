#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    ll n, m, p; cin >> n >> m >> p; 
	    ll a[n], b[m], c[p];
	    map <ll, ll> mp; 
	    
	    for(ll i=0; i < n; i++)
	    {
	        cin >> a[i];
	        if(a[i-1] != a[i])
	            ++mp[a[i]];
	    }
        for(ll i=0; i < m; i++)
	    {
	        cin >> b[i];
	        if(b[i-1] != b[i])
	            ++mp[b[i]];
	    }
        for(ll i=0; i < p; i++)
	    {
	        cin >> c[i];
	        if(c[i-1] != c[i])
	            ++mp[c[i]];
	    }
	    int flag = 1;
	    for(auto i : mp)
	    {
	        if(i.second == 3)
	        {
	            cout << i.first << " ";
	            flag = 0;
	        }
	    }
	    if(flag)cout << -1;
	    cout << endl;
	}
	return 0;
}