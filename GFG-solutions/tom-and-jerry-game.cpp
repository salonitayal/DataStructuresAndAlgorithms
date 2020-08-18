#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll ts; cin >> ts;
        
        if(ts % 2 != 0)
            cout << ts/2 << endl;
        else 
        {
            ll n2 = ts / (ts & (~(ts-1)));
            cout << n2/2 << endl;
        }
    }
    return 0;
}