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
        int n, k, s; cin >> n >> k >> s;
        vector<int> v;
        int x = 1;
        for(int i=0; i<n; i++)
        {
            v.push_back(x);
            x+=2;
        }
        int sm = pow(n, 2);
        for(int i=0; i<n; i++)
        {
            int x = k*v[i] + sm - v[i];
            if(x == s)
            {
                cout << v[i] << endl;
                break;
            }
        }
    }
    return 0;
}