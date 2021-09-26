// =======================             https://ide.geeksforgeeks.org/Nan0NKnmRp         =====================

#include <iostream>
#include <stack>
#define ll long long int
using namespace std;

int main() {
	ll t; cin >> t;
	while(t--)
	{
	    ll n; cin >> n;
	    ll a[n]; 
	    for(ll i=0; i<n; i++)cin >> a[i];
	    
	    stack<ll> s;
	    ll ans = 0;
	    for(ll i=0; i<n; i++)
	        if(s.empty() || a[i] < a[s.top()])       // Builds the decreasing stack array
	            s.push(i);
	            
	   for(ll i=n-1; i>=0; i--)
	   {
	       while(!s.empty() && a[s.top()] <= a[i])
	       {
	           if(ans < i - s.top())
	               ans = i - s.top();
	       
	           s.pop();                            // so that we can access next smallest num
	       }
	   }
	   cout << ans << endl;
	}
	return 0;
}