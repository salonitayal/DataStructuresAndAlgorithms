#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--)
	{
	    int n, k; cin >> n >> k;
	    int a[n];
	    for(int i=0; i<n; i++)cin >> a[i];
	    int s=0, c=0, flag=0;
	    for(int i=0; i<n;)
	    {
	        if(a[i] > k)
	        {
	            c = -1;
	            break;
	        }
	        else
	        {
	            s += a[i];
	            if(s <= k)
                {
                    if(!flag)++c;
                    flag = 1;
					++i;
                    continue;
                }
	            else
	            {
	                s = 0;
                    flag = 0;
	            }
	        }
	    }
	    cout << c << endl;
	}
	return 0;
}
