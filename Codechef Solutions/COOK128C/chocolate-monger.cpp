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
        int n, x; cin >> n >> x; 
        vector<int> v(n);
        map<int, int> m;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            ++m[v[i]];
        }
        for(auto i:m)
        {
            if(i.second>1)
            {
                x -= i.second-1;
                i.second =1;
                if(x<=0)break;
            }
        }
        if(x>0)
        {
            int ans=m.size()-x;
            cout << ans << endl;
        }
        else cout << m.size() << endl;
        
    }
    return 0;
}
