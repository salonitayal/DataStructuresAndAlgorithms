#include<bits/stdc++.h>
#define ll long long int
#define vchk(v) for(auto i:v)cout << i << " ";
using namespace std;
void solve()
{
    int n; cin >> n; 
    vector<int> a(n); 
    list<int> od, ev;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]&1)od.push_back(a[i]);
        else ev.push_back(a[i]);
    }
    
    int res=0;
    for(int i=1; i<=n; i+=2) // for all odds
    {
        if(ev.size()>0)
        {
            ++res;
            ev.pop_front();
        }
    }
    for(int i=2; i<=n; i+=2) // for all evens
    {
        if(od.size()>0)
        {
            ++res;
            od.pop_front();
        }
    }
    cout << res << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}