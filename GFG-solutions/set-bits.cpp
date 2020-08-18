#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t; cin >> t;
	while(t--)
	{
	    long long int n; cin >> n;  // let n = 6
	    long long int count = 0;
	    while(n)
        {
            count += n&1;     // count = 0 + (110 & 001)1st iteration
            n >>= 1;         // n = (110 >> 1) it becomes 011
        }
        cout << count << endl;
	}
	return 0;
}
