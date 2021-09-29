#include<bits/stdc++.h>
#define ll long long int
#define vchk(v) for(auto i:v)cout << i << " ";
using namespace std;
void solve()
{
    int x, y, z; cin >> x >> y >> z;
    x += z*2;
    if(x >= y)cout<< "YES";
    else cout << "NO";
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