#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    int n; cin >> n;
	    int a[n];
	    for(int i = 0; i < n; i++)cin >> a[i];
	    cout << endl;
	    //logic starts here
	    sort(a, a+n);
        for(int i = 0; i < n; i++)cout << a[i] << " ";
        cout << endl;
	}
	return 0;
}