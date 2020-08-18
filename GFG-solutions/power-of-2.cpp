#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t; cin >> t;
	while(t--)
	{
	    long long int n; cin >> n;
	  
	    if(floor(log2(n)) == ceil(log2(n)) && n != 0)cout << "YES"<<endl;
	    else cout << "NO" << endl;
	}
	return 0;
}
