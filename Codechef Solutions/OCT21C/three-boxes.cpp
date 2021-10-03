#include<bits/stdc++.h>
#define ll long long int
#define vchk(v) for(auto i:v)cout << i << " ";
using namespace std;
void solve()
{
    int a, b, c, d; cin >> a >> b >> c >> d;
    if(d-a-b-c>=0)cout << 1;
    else if(d-a-b>=0 || d-b-c>=0 || d-c-a>=0)cout << 2;
    else cout << 3;
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