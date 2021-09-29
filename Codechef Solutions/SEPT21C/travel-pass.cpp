#include<bits/stdc++.h>
#define ll long long int
#define vchk(v) for(auto i:v)cout << i << " ";
using namespace std;
int solve()
{
    int n, a, b; cin >> n >> a >> b;
    string s; cin >> s;
    int sm0=0, sm1=0;
    for(int i=0; s[i]; i++)
    {
        if(s[i]=='0')++sm0;
        else ++sm1;
    }
    int ans = sm0 * a + sm1 * b;
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        cout << solve() << endl;
    }
    return 0;
}