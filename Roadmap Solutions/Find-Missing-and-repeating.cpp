#include <iostream>
using namespace std;

int main() {
	//code
	int t; cin >> t;
	while(t--)
	{
	    int n; cin >> n;
	    int a[n]; for(int i=0; i<n; i++)cin >> a[i];
	    
	    // For repeating 
	    int rep;
	    for(int i=0; i<n; i++)
	        if(a[abs(a[i])-1] > 0)a[abs(a[i])-1] *= -1;
	        else rep = abs(a[i]);
	    
	    // For Missing
	    int mis;
	    for(int i=0; i<n; i++)
	        if(a[i] > 0)mis = i+1;
	    
	    cout << rep << " " << mis << endl;
	}
	return 0;
}