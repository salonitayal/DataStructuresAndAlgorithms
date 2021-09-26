//=======================
#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--)
	{
	    int n; cin >>n; 
	    int a[n], x;
	    for(int i=0; i<n; i++)cin>>a[i];
	    
	    for(int i=0; i<=n-2; i+=2)
	    {
	        if(a[i] > a[i+1])swap(a[i], a[i+1]);
	        if(a[i+1] < a[i+2] && i+2 < n)swap(a[i+1], a[i+2]);
	    }
	    for(int i=0; i<n; i++)cout << a[i] << " ";
	    cout << endl;
	    
	}
	return 0;
}