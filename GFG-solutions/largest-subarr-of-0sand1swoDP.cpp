// USED DYNAMIC PROGRAMMING TO SOLVE THIS ONE
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int s[n]; for(int i = 0; i < n; i++)cin >> s[i];

    int sum = 0;
    int max_len = 0;
    // For double 
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 0)s[i] = -1;
    }
    
    // For >= 3 
    for(int cur_pos = 2; cur_pos <= n; cur_pos++)
    {
        for(int i = 0; i < n-cur_pos+1; i++)
        {
            int j = cur_pos-1+i;
            if(accumulate(s+i, s+j+1, sum) == 0)
            {
                max_len = cur_pos;    
            }
        }
    }
    
    cout << max_len;
    return 0;
}






