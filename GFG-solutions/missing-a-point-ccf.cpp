#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t; cin >> t; 
    while(t--)
    {
        ll n; cin >> n;
        ll x_coord = 0, y_coord = 0;
        n = (4 * n) - 1;
        while(n--)
        {
            ll a, b; 
            cin >> a >> b;

            x_coord = x_coord ^ a;
            y_coord = y_coord ^ b;
        }
        cout << x_coord << " " << y_coord << endl;
    }
    return 0;
}