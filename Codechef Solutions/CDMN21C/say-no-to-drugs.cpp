#include<bits/stdc++.h>
#define ll long long int
#define vchk(v) for(auto i:v)cout << i << " ";
using namespace std;
void solve()
{
    int n, k, l; cin >> n >> k >> l;
    int a[n], mx=-1; 
    for(int i=0; i<n; i++)
    {
       cin >> a[i];
       mx = max(mx, a[i]);
    }
    int f=a[n-1];
    if(mx <= f)
    {
        cout << "Yes";
        return;
    }
    else if(k<=0)
    {
        cout << "No";
        return;
    }
    else
    {
        int dop = (k*(l-1) + a[n-1]);
        //cout << k;
        if(dop > mx)
        {
            cout << "Yes";
            return;
        }
        else cout << "No";
    }
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