#include <iostream>
#include <algorithm>
using namespace std;
// tle sol
int main() {
	int t; cin >> t;
	while(t--)
	{
	    int l, r; cin >> l >> r;
	    int x = 2;
	    int ans;
	    
	    for(int i = l; i <= r; i++)
	    {
	        if(__gcd(x, i) == 1 && i==r)
	        {
	            ans = x;
	            break;
	        }
	        else if(__gcd(x, i) == 1)continue;
	        else
	        {
	            i = l;
	            ++x;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}
