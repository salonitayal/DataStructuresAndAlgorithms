/*
// USING XOR 
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s1, s2; cin >> s1>> s2;
        int x =0;
        if(s1.length()==s2.length())
            for(int i =0; i<s1.length(); i++)
                x = x^s1[i]^s2[i];
        else x = 1;

        (x == 0)?cout << "YES"<< endl:cout << "NO" << endl;
    }
}
*/
#include<iostream>
#include<string>
#include<array>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s1, s2; cin >> s1>> s2;
        int cval, cval2;
        int a[25], b[25];
        
        for(auto i=0; i<26; i++)a[i]=b[i]=0;

        if(s1.length() == s2.length())
        {
            for(int i = 0; i<s1.length(); i++)
            {
                cval = s1[i]-97; cval2 = s2[i]-97;
                ++a[cval], ++b[cval2];
            }
            (equal(begin(a), end(a), begin(b)))?cout << "YES"<<endl:cout << "NO"<<endl;
        }
        else cout << "NO"<<endl;
    }
    return 0;
}