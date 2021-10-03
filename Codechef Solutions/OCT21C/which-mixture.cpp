#include<bits/stdc++.h>
#define ll long long int
#define vchk(v) for(auto i:v)cout << i << " ";
using namespace std;
void solve()
{
    int a, b; cin >> a >> b;

    if(a>0 && b>0)cout << "Solution";
    else if(b==0)cout << "Solid";
    else if(a==0)cout << "Liquid";
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