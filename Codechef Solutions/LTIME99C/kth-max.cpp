#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[n];
        int mx = INT_MIN;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(mx < a[i])
                mx = a[i];
        }
        ll ans = 0;
        for(int i=k-1; i<n; i++)
            if(a[i] == mx)ans += n-i;
            
        cout << ans << endl;
    }
    return 0;
}