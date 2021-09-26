#include <iostream>
#define ll long int
using namespace std;

int main() {
	int t; cin>>t;
	while(t--)
	{
	    ll n, m; cin>>n >>m;
	    ll a[n], b[m], x[n+m];
        for(ll i=0; i<n; i++)cin>>a[i];
        for(ll i=0; i<m; i++)cin>>b[i];
	    ll j=0, k=0;
	    
	    for(ll i=0; i<n+m; i++)
	    {
	        if(a[j] <= b[k]){
	            x[i] = a[j]; j++;
	        }
	        else{
	            x[i] = b[k]; k++;
	        }
	    }
	    for(ll i=0; i<n+m; i++) cout << x[i] << " ";
	    cout << endl;
	}
	return 0;
}