#include<bits/stdc++.h>
using namespace std;

void rec(vector<int> v, vector<int> res, int i, int sm, int t, vector<vector<int>>& ans)
{
        if(i == v.size())return;
        rec(v, res, i+1, sm, t, ans);
        sm+=v[i];
        //cout << v[i] << endl;
        if(sm < t)res.push_back(v[i]);
        else if(sm == t)
        {
            res.push_back(v[i]);
            ans.push_back(res);
            for(auto i:res)cout << i << " ";
            cout << endl;
        }
        rec(v, res, i+1, sm, t, ans);
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> res;
        vector<vector<int>> ans;
        rec(candidates, res, 0, 0, target, ans);
        return ans;
}

int main()
{
    vector<int> v;
    int a;
    while(cin >> a)v.push_back(a);
    int t;
    cin >> t;
    vector<vector<int>> ans = combinationSum2(v, t);
    // for(int i=0; i<ans.size(); i++)
    // {
    //     for(int j=0; j<ans[i].size(); j++)
    //         cout << ans[i][j];
    //     cout << endl;
    // }
}