#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t; cin >> t; 
    while(t--)
    {
        ll n; cin >> n; 
        ll a[n];
        ll s = 0;
        for(ll i=0; i<n; i++)
        {
            cin >> a[i];
            if(i > 0)
            {
                if(a[i-1] > a[i]) s += (a[i-1] - a[i]) - 1;
                else if(a[i-1] < a[i])s += (a[i] - a[i-1]) - 1;
                else continue;
            }
            
        }
        cout << s << endl;
    }
    return 0;
}