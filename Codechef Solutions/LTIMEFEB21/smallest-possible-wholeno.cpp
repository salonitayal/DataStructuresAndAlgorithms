#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--)
	{
	    int n, k; cin >> n >> k;
	    if(n >= k && k)cout << (n%k);
	    else cout << n;
	    cout << endl;
	}
	return 0;
}
