#include<bits/stdc++.h>
#define ll long long int
#define vchk(v) for(auto i:v)cout << i << " ";
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    int mx = n-2;
    if(n == k)
    {
        for(int i=1; i<=n; i++)cout << i << " ";
        return;
    }
    if(k > mx)
    {
        cout << -1;
        return;
    }
    int a[n]; 
    int i;
    for(i=0; i<k; i++)a[i]=i+1;
    a[i]=n;
    ++i;
    for(int j=i; j<n; j++)a[j]= j;
    for(int i=0; i<n; i++)cout << a[i] << " ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}