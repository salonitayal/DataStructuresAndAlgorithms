#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        int n, x, k; cin >> n >> x >> k;
        int f=0;
        if(x%k==0)f=1;
        if(f==0 && (n+1-x)%k==0)f=1;
        
        (f)?cout << "YES":cout << "NO";
        cout << endl;
    }
    return 0;
}