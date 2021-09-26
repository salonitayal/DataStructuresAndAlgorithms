// SOLVED MYSELf ===============           https://ide.geeksforgeeks.org/nHG5c43VcQ          ==============
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    string s; cin >> s;
	    map<char, int> m;
        int c=1;
	    for(int i=0; i<s.length(); i++)
	    {
	        if(m.find(s[i]) != m.end())
	        {
	            cout << s[i] << endl; c=0;
	            break;
	        }
	        m[s[i]]++;
	    }
	    if(c)cout << -1 << endl;
	}
	return 0;
}
