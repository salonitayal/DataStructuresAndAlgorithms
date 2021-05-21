#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool do_we_need_more_woods(ll a[], ll n, ll v, ll mid)
{
    ll sm = 0;
    for(int i=0; i<n; i++)
        sm += max(0ll, a[i]-mid);

    if(sm >= v)return true;
    return false;
}


ll binary_search(ll a[], ll n, ll v)
{
    ll lo = 0, hi = 1000000002;
    while(hi-lo>1)
    {
        int mid = (lo + hi)/2;

        if(do_we_need_more_woods(a, n, v, mid))
            lo = mid;   // since we need more woods so decrease the height of machine drill
        else
            hi = mid-1;
    }
    if(do_we_need_more_woods(a, n, v, hi))return hi;
    else if(do_we_need_more_woods(a, n, v, lo))return lo;
}

int main()
{
    ll n, k; cin >> n >> k;
    ll a[n]; for(ll i=0; i<n; i++)cin >> a[i];
    cout << binary_search(a, n, k);
}