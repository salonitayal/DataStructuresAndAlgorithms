#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t; 
    while(t--)
    {
        int n, sm=0; cin >> n;
        int a[n];
        
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            sm += a[i];
        }
        int w = sm/2;

        bool dp[n + 1][w + 1];

        for(int i=0; i<n+1; i++)
        {
            for(int j=0; j<w+1; j++)
            {
                if(i==0)dp[i][j] = false;
                if(j==0)dp[i][j] = true;
            }
        }

        for(int i=1; i<n+1; i++)
        {
            for(int j=1; j<w+1; j++)
            {
                if(a[i-1] <= j)
                dp[i][j] = dp[i-1][j-a[i-1]] || dp[i-1][j];
                else 
                dp[i][j] = dp[i-1][j];
            }
        }

        if(sm&1)cout << "NO" << endl;
        else
        {
            if(dp[n][w] == 1)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}