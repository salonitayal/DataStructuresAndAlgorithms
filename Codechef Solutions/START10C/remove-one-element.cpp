#include<bits/stdc++.h>
#define ll long long int
#define vchk(v) for(auto i:v)cout << i << " ";
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> v(n), b(n-1);
        int vsm=0, bsm=0;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            vsm += v[i];
        }
        for(int i=0; i<n-1; i++)
        {
            cin >> b[i];
            bsm += b[i];
        }
        
        int res = INT_MAX;
        for(int i=0; i<n; i++)
        {
            int x = bsm - vsm + v[i]; //  34 - (16-1)
            if(x%(n-1) == 0 && x>=0)
            {
                int z = x/(n-1);
                res = min(res, z);
            }
        }
        cout << res << endl;
    }
    return 0;
}