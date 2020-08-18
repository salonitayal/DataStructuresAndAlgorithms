//Returning certain element in fibo sequence using recurrence

#include<iostream>
using namespace std;
int fib(int n)
{
    if(n == 0 | n == 1)
        return n;
    else 
        return  fib(n-1) + fib(n-2);
}
int fibDp(int n, int *dp)
{
    if(n == 0 | n == 1)
    {
        dp[n] = n; return n;
    }
    if(dp[n] != -1)
    {
        return dp[n];
    }
    else{
        dp[n] = fibDp((n-1), dp) + fibDp((n-2), dp);
        return dp[n];
    }
}
int main()
{
    int n; cin>> n;
    cout << "Recursive: "<<fib(n)<< endl;
    //Top Down + dp + memoisation 
    int dp[100];
    for(int i = 0; i < 100; i++)dp[i] = -1;

    cout << "dp: "<<fibDp(n, dp);
    return 0;
}