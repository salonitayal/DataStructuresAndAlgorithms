// IF DIFF BW COUNT OF SET-BITS ON ODD PLACES AND EVEN PLACES IS DIVISIBLE BY 3 THEN BIN_NO IS MULTIPLE OF 3.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin >> s;
        int cn=0, cn2=0;
        for(int i=0; i<s.length(); i+=2)
            if(s[i] == '1')++cn;

        for(int i=1; i<s.length(); i+=2)
            if(s[i] == '1')++cn2;
        if(abs(cn-cn2)%3 == 0)cout << 1 << endl;
        else cout << 0 << endl;
    } 
    return 0;
}