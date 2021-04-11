#include <iostream>
#include <vector>
#define ll long long int 
using namespace std;

int main() {
	int t; cin >> t; 
	while(t--)
	{
	    ll n; cin >> n;
	    vector<ll>v(5);
	    v[1]=20;
	    v[2]=36;
	    v[3]=51;
	    v[4]=60;
	    ll d = n/4;
	    ll r = n%4;
	    ll ans = (d*60)-((d-1)*16)-(r*4)+v[r];
	    if(n==1)cout << 20;
	    else if(n==2)cout << 36;
	    else if(n==3)cout << 51;
	    else if(n==4)cout << 60;
	    else cout << ans;
	    cout << endl;
	}
	return 0;
}
