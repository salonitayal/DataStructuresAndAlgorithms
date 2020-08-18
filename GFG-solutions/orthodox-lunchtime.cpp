#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        ll a[n]; for(ll i=0; i<n; i++)cin >> a[i];
        set<ll> s;
        ll x = a[0];
        int c = 1;
        for(ll i=0; i<n; i++)s.insert(a[i]);
        for(ll i=1; i<n; i++)
        {
            x |= a[i];
            if(s.find(x) != s.end())
            {
                c = 0;
                break; 
                
            }
            if(s.find(x) == s.end())
            {
                s.insert(x);
            }
        }
        //ll n2 = (n*(n+1))/2;
        if(c ==1)cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    
	return 0;
}
