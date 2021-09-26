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
        int a, b, a1, b1, a2, b2;
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;
        int ans = 0;
        if((a == a1 && b == b1) || (a == b1 && b == a1))ans = 1;
        else if((a == a2 && b == b2) || (a == b2 && b == a2))ans = 2;
        cout << ans << endl;
    }
    return 0;
}