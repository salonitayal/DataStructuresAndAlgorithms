#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n+n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        a[n+i] = a[i]; //copying at end
    }
    int k; cin >> k;
    int sm = 0;
    
    for(int i=n-k; i<n; i++)
        sm += a[i];   // 5+6+1 = 12

    int ans = 0;
    ans = max(sm, ans);
    for(int i=n-k; i<n; i++)
    {
        sm -= a[i]; // sliding window technique
        sm += a[i+k];
        ans = max(ans, sm);
    }
    cout << ans ;
    
}