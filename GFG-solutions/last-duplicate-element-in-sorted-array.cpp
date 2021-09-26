#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    int n; cin >> n;
	    int a[n];
	    for(int i = 0; i < n; i++)cin >> a[i];
	    
	    //logic starts here
	    int count = 0, index, val;
	    for(int i = 0; i < n-1; i++)
	    {
	        if(a[i] == a[i+1])
	        {
	            index = i+1; 
	            val = a[i+1];
	            ++count;
	        }
	    }
	    if(count == 0)
	        cout << -1 <<endl;
	    else
	        cout << index << " " << val << endl;
	}
	return 0;
}