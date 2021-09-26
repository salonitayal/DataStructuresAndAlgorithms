// USED DYNAMIC PROGRAMMING TO SOLVE THIS ONE
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int s[n]; for(int i = 0; i < n; i++)cin >> s[i];
    bool palindrome_table[n][n];
    memset(palindrome_table, 0, sizeof(palindrome_table)); 
    
    int max_len = 0;
    // For double 
    for(int i = 0; i < n-1; i++)
    {
        if(s[i] != s[i+1])
        {
            palindrome_table[i][i+1] = true;
            max_len = 2;
        }
    }
    
    // For >= 3 
    for(int cur_pos = 3; cur_pos <= n; cur_pos++)
    {
        for(int i = 0; i < n-cur_pos+1; i++)
        {
            int j = cur_pos-1+i;
            if(s[i] != s[j] && palindrome_table[i+1][j-1])
            {
                palindrome_table[i][j] = true;
                max_len = cur_pos;    
            }
        }
    }
    
    cout << max_len;
    return 0;
}






