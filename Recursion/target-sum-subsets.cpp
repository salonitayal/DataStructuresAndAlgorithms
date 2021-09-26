#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void targetSum(vector<int> a, int t, int i, int sm, string res)
{
    if(i == a.size())
    {
        if(sm == t)
        {
            res = res.substr(0, res.length()-1);
            cout << res << endl;
            res += ',';
        }
        return;
    }
    
    targetSum(a, t, i+1, sm + a[i], res + to_string(a[i]) + ',');
    targetSum(a, t, i+1, sm, res);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n); for(int i=0; i<n; i++)cin >> a[i];
        int trg; cin >> trg;
        vector<int> res;
        targetSum(a, trg, 0, 0, "");
    }
    
    return 0;
}