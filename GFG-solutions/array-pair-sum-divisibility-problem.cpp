#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
	while(t--)
	{
	    int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int k; cin >> k;

        int s=0; 
        s = accumulate(v.begin(), v.end(), s);
        (s % k == 0 && n % 2 == 0)? cout << "True" << endl: cout << "False" << endl;
	}
	return 0;
}