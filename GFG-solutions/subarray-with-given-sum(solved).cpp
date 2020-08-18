// WHAT THE FUCK?????? CANT BELIEVE I SOLVED IT!!! I SOLVED THIS ONE!!! OH GOD

#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    int n, sum; cin >> n>> sum;
	    int a[n]; for(int i = 0; i < n; i++)cin >> a[i];
	    int count = 0;
	    for(int j = 0; j < n; j++)
	    {
	        int x = 0; 
	        for(int i  = j; i < n; i++)
	        {
	            x += a[i];
	            if(x == sum && count == 0)
	            {
	                cout << j+1 << " " << i+1 << endl; 
	                ++count;
                    break;
	            }
                else if(x > sum)
                    break;
}
	    }
	    if(count == 0)cout << -1 << endl;
	}
	return 0;
}
