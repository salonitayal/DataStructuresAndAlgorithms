#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--)
	{
	    string s; cin >> s;
	    int c=0;
	    int n = s.length();
	    int i = 0;
	    while(i<n)
	    {
	        if(s[i] == '1' && s[i+1] != '1')
	            ++c;
	        ++i;
	    }
	    cout << c << endl;
	}
	return 0;
}
