#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    string s1, s2; 
	    cin >> s1;
	    cin >> s2;
	    map<char, int> m;
	    for(int i=0; i<s2.length(); i++) m[s2[i]] = i;
	    int c = 1;
	    for(int i=0; i<s1.length(); i++)
	    {
	        if(m.find(s1[i]) != m.end()){
	             cout << s1[i] << endl;
	             c=0;
	             break;
	        }
	    }
	    if(c)cout << "$" <<endl;
	}
	return 0;
}