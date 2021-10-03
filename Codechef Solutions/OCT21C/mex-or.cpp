/******************************************
		* AUTHOR : SALONI TAYAL *
******************************************/

#include <bits/stdc++.h>
#define ll unsigned long long int
#define vchk(v) for(auto i:v)cout << i << " ";
using namespace std;

void solve()
{
    ll x; cin >> x;
    if(x==0)
    {
        cout << 1 << endl; 
        return;
    }
    ll y = log2(x);
    ll z = pow(2, y+1);
    if(x == z-1)
    {
        cout << z << endl;
        return;
    }
    y = pow(2, y);
    ll ans =  y%1000000007;
    cout << ans << endl;
}
int main()

{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t; cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}