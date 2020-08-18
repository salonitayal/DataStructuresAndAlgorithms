#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--)
	{
	    int n, m, x, y;
	    cin >> n >> m >> x >> y;
	    int ans;
	    m *= n; 
	    double m1 = m; m1 /= 2;
	    ans = floor(m1) * x + ceil(m1) * (y-x);
	    cout << ans << endl;
        
	}
	return 0;
}
