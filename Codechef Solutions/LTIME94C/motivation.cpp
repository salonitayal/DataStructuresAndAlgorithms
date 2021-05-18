#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--)
	{
	    int n, x; cin >> n >> x;
	    int mx = -1, s, r;
	    for(int i=0; i<n; i++)
	    {
	        int y, z; cin >> y >> z;
	        if((z > mx)&&(y <= x))
	        {
	            mx = z;
	            s = y;
	            r = z;
	        }
	    }
	    cout<< r << endl;
	}
	return 0;
}
