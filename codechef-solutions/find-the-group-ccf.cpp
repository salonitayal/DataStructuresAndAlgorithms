#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n; cin >> n;
    vector<ll> v(32);
    int i = 0;
    while(n > 0)
    {
        v[i] = n%2;
        n = n/2;
        i++;
    }
    int c = 0, ans = 0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i] == 1)++c;
        else c=0;

        ans = max(ans, c);
    }
    cout << ans;
    return 0;
}