#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t; 
    while(t--)
    {
        int n, sm; cin >> n >> sm;
        bool dp[n + 1][sm + 1];
        int a[n];
        for(int i=0; i<n; i++)cin >> a[i];
        for(int i=0; i<n+1; i++)
        {
            for(int j=0; j<sm+1; j++)
            {
                if(i==0)dp[i][j] = false;
                if(j==0)dp[i][j] = true;
            }
        }

        for(int i=1; i<n+1; i++)
        {
            for(int j=1; j<sm+1; j++)
            {
                if(a[i-1] <= j)
                dp[i][j] = dp[i-1][j-a[i-1]] || dp[i-1][j];
                else 
                dp[i][j] = dp[i-1][j];
            }
        }
        cout << dp[n][sm] <<endl;
    }
    return 0;
}