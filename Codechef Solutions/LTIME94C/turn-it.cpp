#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    int u, v, a, s; cin >> u >> v >> a >> s;
	    int x = pow(u, 2) - 2 * a * s;
	    x = ceil(pow(x, 0.5));
	    if(x <= v)cout << "Yes";
	    else cout << "No";
	    cout << endl;
	}
	return 0;
}
