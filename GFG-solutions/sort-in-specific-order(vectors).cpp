#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    int n; cin >> n; int a[n]; for(int i=0; i< n; i++)cin>>a[i];
	    vector<int> x, y;
	    for(int i=0; i<n; i++)
	        if(a[i]%2 != 0)x.push_back(a[i]);
	        else y.push_back(a[i]);
	    sort(x.begin(), x.end(), greater<int>());
	    sort(y.begin(), y.end());
	    
	    for(int i=0; i<x.size(); i++)cout << x[i] << " ";
	    for(int i=0; i<y.size(); i++)cout << y[i] << " ";
	    cout << endl;
	}
	return 0;
}