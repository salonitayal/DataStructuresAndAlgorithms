#include<bits/stdc++.h>
using namespace std;
    int longestValidParentheses(string s) {
        int l=0, r=0, mx=0;
        for(int i=0; s[i]; i++)
        {
            if(s[i] == '(') ++l;
            else ++r;
            if(l==r)mx = max(mx, l+r);
            else if(l<r)l=r=0;
        }
        l=r=0;
        for(int i=s.length()-1; i>=0; i--)
        {
            if(s[i] == '(') ++l;
            else ++r;
            if(l==r)mx = max(mx, l+r);
            else if(l>r)l=r=0;
        }
        return mx;
    }
int main()
{
    string s; cin >> s;
    cout << longestValidParentheses(s);
}