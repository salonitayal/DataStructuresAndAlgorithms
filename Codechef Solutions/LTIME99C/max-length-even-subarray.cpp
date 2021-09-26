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
        int n; cin >> n;
        if(!(n&1))
        {
            if(!((n/2)&1))cout << n;
            else cout << n-1;
        }
        else 
        {
            if(!(((n+1)/2)&1))cout << n;
            else cout << n-1;
        }
        cout << endl;
    }
    return 0;
}