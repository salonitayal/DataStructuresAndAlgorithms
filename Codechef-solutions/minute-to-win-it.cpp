#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k; cin >> n >> k;
    ll a[n];
    for(ll i=0; i<n; i++)cin >> a[i];
    
    ll m = 0;
    //int x = 0;
    for(int i=1; i<n; i++)
    {
        if((a[i] - a[i-1]) != k)
        {
            a[i] = k + a[i-1];
            ++m;
        }
    }
    cout << m << endl;
    return 0;
}