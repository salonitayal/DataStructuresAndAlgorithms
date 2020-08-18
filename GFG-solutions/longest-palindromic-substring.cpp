// USED DYNAMIC PROGRAMMING TO SOLVE THIS ONE
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int n = s.length();
    bool palindrome_table[n][n];
    memset(palindrome_table, 0, sizeof(palindrome_table));
    int begin_at = 0;
    int max_len = 1;

    // For single character string 
    for(int i = 0; i < n; i++)
    {
        palindrome_table[i][i] = true;
    }
    
    // For double character string
    for(int i = 0; i < n-1; i++)
    {
        if(s[i] == s[i+1])
        {
            palindrome_table[i][i+1] = true;
            begin_at = i;
            max_len = 2;
        }
    }
    
    // For string >= 3 character length
    for(int cur_pos = 3; cur_pos <= n; cur_pos++)
    {
        for(int i = 0; i < n- cur_pos+1; i++)
        {
            int j = cur_pos-1+i;
            if(s[i] == s[j] && palindrome_table[i+1][j-1])
            {
                palindrome_table[i][j] = true;
                    begin_at = i;
                    max_len = cur_pos;
                
            }
        }
    }
    cout << s.substr(begin_at, max_len+begin_at);
    return 0;
}






