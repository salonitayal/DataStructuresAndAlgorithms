#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, h, x;
	cin >> n >> h >> x;
	int a[n];
	int y = h-x;
	for(int i=0; i<n; i++)cin >> a[i];
	int flag = 0;
	for(int i=0; i<n; i++)
	{
	    if(y <= a[i])
	    {
	        flag = 1;
	        break;
	    }
	}
	(flag)?cout<<"YES":cout <<"NO";
	cout << endl;
	return 0;
}
