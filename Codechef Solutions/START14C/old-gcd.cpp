#include<bits/stdc++.h>
#define ll long long int
#define vchk(v) for(auto i:v)cout << i << " ";
using namespace std;
int powof2(int n)
{
    int cnt=-1;
    while(n)
    {
        n/=2;
        ++cnt;
    }
    return cnt;
}
int highestPowerOf2(int n)
{
    return (n & (~(n - 1)));
}
void solve()
{
    int n; cin >> n;
    int a[n]; for(int i=0; i<n; i++)cin >> a[i];
    sort(a, a+n);
    int res=INT_MAX;
    for(int i=1; i<n; i++)
    {
        res = min(__gcd(a[i-1], a[i]), res);
    }
    if(res&1)
    {
        cout << 0 << endl;
        return;
    }
    
    int ans = highestPowerOf2(res);
    ans = powof2(ans);
    for(int i=0; i<n; i++)
    {
        if((a[i]/res)&1)//is odd
        {
            cout << ans << endl;
            return;
        }
    }
    //ans = highestPowerOf2(a[0]);
    ans = powof2(ans);
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}