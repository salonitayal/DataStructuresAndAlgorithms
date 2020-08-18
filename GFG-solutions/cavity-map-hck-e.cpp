#include <bits/stdc++.h>
#include <climits>
#define forloop(i, n) for(int i=0; i<n; i++)
using namespace std;


int main()
{
        int n; cin >> n; 
        string s[n];

        forloop(i, n)
        {
            cin >> s[i];
        }
        forloop(i, n)
        {
            forloop(j, n)
            {
                if((i > 0 && j > 0) && (i < n-1 && j < n-1))
                {
                    if((s[i][j-1] < s[i][j] && s[i][j+1] < s[i][j]) && (s[i-1][j] < s[i][j] && s[i+1][j] < s[i][j]))
                        cout << 'X';
                    else 
                        cout << s[i][j];
                }
                else  
                    cout << s[i][j];
            }
            cout << endl;
        }
    return 0;
}
