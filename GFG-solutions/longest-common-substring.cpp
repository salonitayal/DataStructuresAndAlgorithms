#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n>> m;
        string s1, s2; cin >> s1 >> s2;
        int lcs_table[n][m];
        int max = INT32_MIN;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(s1[i] == s2[j])
                {
                    if(i == 0 || j == 0) lcs_table[i][j] = 1;
                    else
                    {
                        lcs_table[i][j] = ++lcs_table[i-1][j-1];
                    }
                    if(lcs_table[i][j] > max) max=lcs_table[i][j];
                }
                else lcs_table[i][j] = 0;
            }
        }
        cout << max << endl;
    }
    return 0;
}