#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t; cin >> t; 
    while(t--)
    {
    ll n, k; cin >> n >> k;
    ll nm = n;
    vector<ll> v(32);
    v = {0};
    int i = 0;
    while(n > 0)
    {
        v[31 - i] = n%2;
        n = n/2;
        i++;
    }
    ll sm = 0;
    if(v[31 - k] == 1)cout << nm; 
    else {
        v[31 - k] = 1;
        for(int i=0; i<32; i++)
            sm += pow(2, 31-i) * v[i];
        cout << sm << endl;
    }
    }
    return 0;
}