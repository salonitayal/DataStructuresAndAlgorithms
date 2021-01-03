#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--)
	{
	    int n, k, d;
	    cin >> n >> k >> d;
	    int a[n], sm = 0; 
	    for(int i=0; i<n; i++)
	    {
	        cin >> a[i];
	        sm += a[i];
	    }
	    int ans = sm / k;
	    if(ans < d)cout << ans;
	    else cout << d;
	    cout << endl;
	}
	return 0;
}
