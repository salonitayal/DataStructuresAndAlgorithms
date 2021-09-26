#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int left = 0, right = 0, maxm = 0;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(') left++;
            else right++;

            if(left == right) maxm = max(maxm, 2*left);
            else if(left < right) left = right = 0;  // to give chance to right side
        }

        left = right = 0;
        for(int i = s.length()-1; i >= 0; i--)
        {
            if(s[i] == ')') right++;
            else left++;

            if(left == right) maxm = max(maxm, 2*left);
            else if(right < left) left = right = 0;
        }
        cout << maxm << endl;
    }
    return 0;
}