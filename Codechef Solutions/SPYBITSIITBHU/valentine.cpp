#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    int n; cin >> n;
	    vector<int> a(n), b(n);
	    for(int i=0; i<n; i++)cin >> a[i];
	    for(int i=0; i<n; i++)cin >> b[i];
	    sort(a.begin(), a.end());
	    sort(b.begin(), b.end(), greater<int>());
	    int res=-1;
	    for(int i=0; i<n; i++)
	    {
	        res = max(res, a[i]+b[i]);
	    }
	    cout << res << endl;
	}
	
	return 0;
}
