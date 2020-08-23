#include <iostream>
using namespace std;

int main() {
	// your code goes 
	int t; cin >> t;
	while(t--)
	{
	    int n; cin >> n;
	    int x[n], y[n];
	    // for(int i=0; i<n; i++)
	    // {
	    //     cin >> x[i] >> y[i];
	    // }
	    int ans = n;
	    while(n>4)
	    {
	        n /= 2;
            if(n > 4)
            	ans += n;
	    }
	    cout << ans << endl;
	}
	return 0;
}
