#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    long long int n; cin >> n;
        long long int p = ceil(log2(n));
        p = pow(2, p);

        long long int maxm = 0;
        for(long long int i=0; i<p; i++)
        {
            long long int x = i ^ n;
            long long int res = x * i;
            if(res > maxm)maxm = res;
        }
        cout << maxm << endl;
	}
	return 0;
}
