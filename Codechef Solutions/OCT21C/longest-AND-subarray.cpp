#include<bits/stdc++.h>
#define ll long long int
#define vchk(v) for(auto i:v)cout << i << " ";
using namespace std;
void solve()
{
    int n; cin >> n;
    int x = (int)log2(n);
    x = pow(2, x);
    int a = n-x+1;
    int b = x-(x/2);
    int res = max(a, b);
    cout << res << endl;
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