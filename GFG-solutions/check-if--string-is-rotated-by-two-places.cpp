#include <iostream>
#include <string>
using namespace std;


int main() {
	int t; cin >> t;
	while(t--)
	{
	    string s1, s2, s3 = "", s4 = "";
	    cin >> s1;
	    cin >> s2;
	    if(s1.length() == s2.length())
	    {
	        for(int i=s1.length()-2; i<s1.length(); i++)
            {
                s3 += s2[i];
                s4 += s1[i];
            }
	        for(int i=0; i<s1.length()-2; i++)
            {
                s3 += s2[i];
                s4 += s1[i];
            }
	        
	        if(s3 == s1 || s4 == s2)cout << 1;
	        else cout << 0;
	    }
	    cout << endl;
	}
	return 0;
}