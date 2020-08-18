#include <iostream>

using namespace std;

int main() {
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    int a[n];
	    int val = 0;
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	        val ^= a[i];
	    }
	    cout << val << endl;
	}
	return 0;
}