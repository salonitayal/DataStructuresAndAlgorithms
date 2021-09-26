#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<vector<int>> ans;
void targetSum(vector<int> a, int t, int i, int sm, vector<int> res)
{
    if(i == a.size())
    {
        if(sm == t)
        {
            ans.push_back(res);
            return;
        }
        return;
    }
    res.push_back(a[i]);
    targetSum(a, t, i+1, sm + a[i], res);
    res.pop_back();
    
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
        targetSum(a, trg, 0, 0, res);
        for(int i=0; ans.size(); i++)
        {
            for(int j=0; j<ans[0].size(); j++)
            cout << ans[i][j] << " ";
            cout << endl;
        }
    }
    
    return 0;
}