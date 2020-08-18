#include<iostream>
#include<climits>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);																																																																																																																												
    cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
	    int n, k, max = INT_MIN	;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0; i < n; i ++)cin>> a[i];
	    int j = 0;
		while(j <= n-k)
		{
			for(int i = j; i < k+j; i ++)
			{																																																																	
				max = max > a[i]?max:a[i];
			}cout << max << " ";max = INT_MIN;
			j ++;
		}cout<< endl;
	}
    return 0;
}