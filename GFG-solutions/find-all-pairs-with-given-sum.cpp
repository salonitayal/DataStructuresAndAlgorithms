// SOLVED MYSELF ==========================================
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    int n, m, x; cin >> n >> m >> x;
	    int a[n], b[m];
	    map<int, int> mp;
	    
	    for(int i=0; i<n; i++)cin >> a[i];
	    for(int i=0; i<m; i++){ cin >> b[i]; ++mp[b[i]]; }
	    
	    sort(a, a+n); sort(b, b+m);
	    vector<int> v;
	    for(int i=0; i<n; i++)
	        if(mp.find(x - a[i]) != mp.end())
	            v.push_back(a[i]);
	    int s = v.size();
	    for(int i=0; i<s; i++)
	    {
	        cout << v[i] << " " << x - v[i];
	        if(i < s-1)cout << ", ";
	    }
	    if(v.size() == 0)cout << -1;
	    cout << endl;
	}
	return 0;
}
