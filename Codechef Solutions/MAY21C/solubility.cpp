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
        int x, a, b; cin >> x >> a >> b;
        int ans = a + (100 - x)* b;
        cout << ans * 10 << endl;
    }
    return 0;
}