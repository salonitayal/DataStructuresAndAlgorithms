// ==========================================            https://ide.geeksforgeeks.org/pKDLmThlml         ================================================
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s[n];
        for(int i=0; i<n; i++)cin >> s[i];
        int c=0, j;
        if(n == 1) cout << s[0];
        for(int i=0; i < s[0].length(); i++)
        {
            for(j=1; j<n; j++)
            {
                if(s[j][0] != s[0][0])
                {
                    cout << - 1;
                    c = 0;
                    break;
                }
                else if(s[j][i] == s[0][i]) 
                    c = 1;
                else 
                {
                    c = 0; 
                    break;
                }
            }
            if(c)
                cout << s[0][i];
            else
                break;
        }
        cout << endl;
    }
    return 0;
}