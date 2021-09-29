#include<bits/stdc++.h>
#define inti int
#define vchk(v) for(auto i:v)cout << i << " ";
using namespace std;
void solve()
{
    inti n, x; cin >> n >> x;
    vector<inti> v(n);
    map<inti, inti> m;
    inti mx = -1, opns = INT_MAX;
    for(inti i=0; i<n; i++)
    {
        cin >> v[i];
        ++m[v[i]];
    }
    if(x == 0)
    {
        for(auto i:m)mx = max(mx, i.second);
        cout << mx << " " << 0 << endl;
        return;
    }
    for(auto i:m) // 1 2 3
    {
        //cout << i.first << " " << i.second << endl;
        inti zor = i.first^x;       
        if(m.find(zor) != m.end())
        {
            if(mx < m[zor]+m[i.first]) 
            {
                mx = m[zor]+m[i.first];
                opns = min(m[zor], m[i.first]);
                
            }
            else if(mx == m[zor]+m[i.first])
            {
                opns = min(opns, min(m[zor], m[i.first]));
            }
        }
        else 
        {
            if(mx <= m[i.first])
            {
                mx = m[i.first];
                opns = 0;
            }
        }
    }
    cout << mx << " " << opns << endl;
}
inti main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    inti t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
