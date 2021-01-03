#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#define ll long long int
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        vector<ll> v;
        for(ll i=0; i<n; i++)
        {
            ll x; cin >> x;
            if(x != 0) v.push_back(x);
        }

        ll s = 0;
            
        sort(v.begin(), v.end(), greater<int>());
        for(ll i=0; i<v.size(); i++)
        {
            v[i] = v[i] - i;
            if(v[i] <= 0)break;
            else s += v[i];
        }
        s = s % 1000000007;
        cout << s << endl;
    }
    return 0;
}