#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    int n; cin >> n;
	    int a[n];
	    int sm = 0, x=0;
	    for(int i=0; i<n; i++)cin >> a[i];
	    sort(a, a+n);
	    for(int i=0; i<n; i++)
	    {
	        if(a[i] > i+1)
	        {
	            cout << "Second";
	            x = 1; break;
	        }
	        else
	        {
	            sm += i+1-a[i];
	        }
	    }
	    if(x == 0)
	    {
	        if(sm%2)cout << "First";
	        else cout << "Second";
	    }
	    cout << endl;
	}
	return 0;
}
