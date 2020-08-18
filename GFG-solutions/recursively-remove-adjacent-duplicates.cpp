#include <iostream>
#include <string>
using namespace std;

string function(string s, int i, string x)
{
    if(x != s)
    {
        if(i == s.length())
        {
            s = x; 
            i = 0;
            x = "";
            return function(s, i, x);
        }
    
        if(s[i] != s[i+1] && s[i-1] != s[i])
        {
            x += s[i];
            return function(s, i+1, x);
        }
        else 
        {
            return function(s, i+1, x);
        }
    }
    return x;
}

int main() {
	int t; cin >> t;
	while(t--)
	{
	    string s, x=""; cin >> s;
        if(s.length()==1)cout << s;
        else cout << function(s, 0, x) << endl;
	}
	return 0;
}