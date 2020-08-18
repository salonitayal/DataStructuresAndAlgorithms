#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >>t;
    while(t--)
    {
        string s, s1; cin >> s;
        char c; cin >> c; 
        int n; cin >> n;
        int count = 0, flag = 0;
        
        s1 = s;

        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == c && count < n)
            {
                s1 = s.substr(i+1, s.length());
                if(s1.length() == 0)flag=1;
                ++count;
            }
            if(count == n)break;
        }
        if(flag || count < n)cout << "Empty string" <<endl;
        else cout << s1 << endl;
    }
}