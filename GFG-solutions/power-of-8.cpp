#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t; cin>>t;  
	while(t--)
	{
	    long long int n; cin>>n;
	    double x = log(n)/log(8);
	    (x - trunc(x) < 0.000001)?cout << "Yes" <<endl:cout << "No" << endl;
	}
	return 0;
}