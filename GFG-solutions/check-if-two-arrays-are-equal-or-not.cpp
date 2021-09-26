#include <iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    ll n; cin >> n;
	    vector<ll> v1(n), v2(n);
	    for(int i=0; i<n; i++)cin >> v1[i];
	    for(int i=0; i<n; i++)cin >> v2[i];
	    sort(v1.begin(), v1.end());
	    sort(v2.begin(), v2.end());
	    if(v1 == v2)cout << 1 << endl;
	    else cout << 0 << endl;
	}
	return 0;
}