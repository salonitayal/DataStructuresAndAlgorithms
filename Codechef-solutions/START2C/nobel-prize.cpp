#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--)
    {
    int n, m; cin >> n >> m;
	int a[n]; 
	unordered_map<int, int> mp;
	for(int i=0; i<n; i++)
	{
	    cin >> a[i];
	    ++mp[a[i]];
	}
	if(mp.size()<m)cout << "yes";
	else cout << "No";
	cout << endl;
    }
	return 0;
}
