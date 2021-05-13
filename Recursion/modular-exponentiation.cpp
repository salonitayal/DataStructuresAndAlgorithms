#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;

int rec(int x, int y, int p)
{
    if(y==0)return 1;
    
    int k = rec(x, y/2, p);
    
    if(y&1)
        return ((((1ll * k*k)%p)*x)%p);  //1ll typecast it into ll as 10^9 * 10^9 can cause int overflow
    else 
        return ((1ll * k*k)%p);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        cout << rec(2, n-1, MOD) << endl;
    }
    return 0;
}