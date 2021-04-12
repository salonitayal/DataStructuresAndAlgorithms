#include<bits/stdc++.h>
using namespace std;

    void rec(vector<int> v, int n, int i, vector<int> &ans, int sm)
    {
        if(i == n)
        {
            ans.push_back(sm);
            return;
        }
        rec(v, n, i+1, ans, sm+v[i]);
        rec(v, n, i+1, ans, sm);
    }

    vector<int> subsetSums(vector<int> v, int N)
    {
        vector<int> ans;
        rec(v, N, 0, ans, 0);
        sort(ans.begin(), ans.end());
        return ans;
    }

    int main()
    {
        vector<int> v(3);
        for(int i=0; i<3; i++)cin >> v[i];
        vector<int> a = subsetSums(v, 3);
        for(auto i:a)cout << i << " ";
    }