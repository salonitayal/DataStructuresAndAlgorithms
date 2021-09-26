//=  ==============================                 https://ide.geeksforgeeks.org/dD5PDK4vlv           ===============================

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        vector<ll> a; 
        for(ll i=0; i<n; i++)
        {
            ll x; cin >> x;
            if(x > 0)
                a.push_back(x);
        }
        n = a.size();
        sort(a.begin(), a.end());
        if(a[0] != 1)cout << 1;
        else
        {
            for(ll i=0; i<n; i++)
            {   
                if(a[i+1] - a[i] != 1 && a[i+1] != a[i])
                {
                    cout << a[i] + 1;
                    break;
                }    
            }   
        }
        cout << endl;
    }
    return 0;
}