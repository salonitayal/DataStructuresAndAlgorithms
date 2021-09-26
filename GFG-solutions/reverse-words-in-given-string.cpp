#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;cin >> s;
    string s1;
    string s2 = "";
    int l = s.length();
   
    for(int i = l-1; i >= 0; i--)
    { 
        if(s[i] != '.')
        { 
            s1 += s[i]; 
        }
        else
        {
            reverse(s1.begin(), s1.end());
            cout << s1 << '.';
            s1 = "";
        }     
    }
    reverse(s1.begin(), s1.end());
    cout << s1 << endl;
    
    
    return 0;
}