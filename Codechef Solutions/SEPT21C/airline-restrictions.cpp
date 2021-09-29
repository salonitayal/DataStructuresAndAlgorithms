#include<bits/stdc++.h>
#define ll long long int
#define vchk(v) for(auto i:v)cout << i << " ";
using namespace std;
void solve()
{
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    if(d-(a+b)>=0 && e-c>=0)
    {
        cout << "Yes";
        return;
    }
    if(d-(a+c)>=0 && e-b>=0)
    {
        cout << "Yes";
        return;
    }
    if(d-(b+c)>=0 && e-a>=0)
    {
        cout << "Yes";
        return;
    }
    cout << "No";
    return;
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