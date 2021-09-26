#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<ll> v(n);
        v[0]=1;
        v[1]=2;
        for(int i=2; i<n; i++)v[i] = v[i-1]+v[i-2];
        cout << v[v.size()-1] << endl;
    }
    return 0;
}