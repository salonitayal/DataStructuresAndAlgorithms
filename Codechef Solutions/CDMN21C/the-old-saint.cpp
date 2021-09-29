#include<bits/stdc++.h>
#define ll long long int
#define vchk(v) for(auto i:v)cout << i << " ";
using namespace std;
void solve()
{
    int a, b, c; cin >> a >> b >> c;
    int x, y, z; cin >> x >> y >> z;
    int sm=a+b+c, sm2=x+y+z;
    if(sm == sm2)cout << "Pass";
    else cout << "Fail";
    cout << endl;
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