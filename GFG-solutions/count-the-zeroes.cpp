// https://ide.geeksforgeeks.org/xfttg5MN8H

#include <iostream>
using namespace std;

int main() {
	int t; cin>> t;
	while(t--)
	{
	    int n; cin >>n; int a[n];
	    for(int i = 0; i < n; i++)cin >>a[i];
	    
	    int val = 0, cn=0;
	    for(int i = n-1; i >= 0; i--)
	    {
	        if((val ^ a[i]) != 0)
	        {
	            cout << n-i-1<< endl;
	            ++cn;
	            break;
	        }
	        
	    }if(!cn)cout << n<< endl;
	    
	    
	}
	return 0;
}