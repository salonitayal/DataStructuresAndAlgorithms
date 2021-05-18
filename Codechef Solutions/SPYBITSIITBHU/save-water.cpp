#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    int h, x, y, c; cin >> h >> x >> y >> c;
	    y /= 2;
	    x += y;
	    h *= x;
	    (c >= h)?cout << "YES":cout << "NO";
	    cout << endl;
	    
	}
	
	return 0;
}
