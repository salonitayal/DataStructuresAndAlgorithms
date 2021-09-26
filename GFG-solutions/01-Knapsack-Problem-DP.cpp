#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int w; cin >> w;
        int wt[n], val[n];
        for(int i=0; i<n; i++)cin >> val[i];
        for(int i=0; i<n; i++)cin >> wt[i];
        
        int dp[n+1][w+1];
        
        for(int i=0; i<n+1; i++)
            for(int j=0; j<w+1; j++)
                if(i==0 || j==0)dp[i][j] = 0;
                
        for(int i=1; i<n+1; i++)
        {
            for(int j=1; j<w+1; j++)
            {
                if(wt[i-1] <= j)
                    dp[i][j] = max((val[i-1] + dp[i-1][j-wt[i-1]]), dp[i-1][j]);

                else 
                    dp[i][j] = dp[i-1][j];
            }
        }

        cout << dp[n][w] << endl;
    }	
	return 0;
}