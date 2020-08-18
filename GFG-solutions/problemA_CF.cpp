#include<bits/stdc++.h>
using namespace std;

int recur(int a[], int i, int n, int ans, int sm, int x)
{
    if(i<n)
    {
        if(sm % x != 0)
        {
            ans = max(ans, n-i); 
            return ans;
        }
        else 
        {
            return max(recur(a, i+1, n, ans, sm-a[i], x), recur(a, i, n-1, ans, sm-a[n-1], x));
        }
    }
    return ans;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, x; cin >> n >> x;int sm = 0;
        int a[n]; for(int i=0; i<n; i++){cin >> a[i]; sm += a[i];}
        int ans=-1;
        cout << recur(a, 0, n, ans, sm, x);
    
        cout << endl;
    }
    return 0;
}