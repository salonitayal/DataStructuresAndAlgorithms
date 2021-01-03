#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll a, b; cin >> a >> b;
        ll c = 0, x = 0;
        while(a % b != 0)
        {
            x = a%b;
            a += x;
            c += x;
        }
        cout << c << endl;
    }
    return 0;
}