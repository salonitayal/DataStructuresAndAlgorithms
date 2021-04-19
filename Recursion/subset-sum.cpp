#include<bits/stdc++.h>
using namespace std;

    void rec(vector<int> v, int n, int i, vector<int> &ans, int sm)
    {
        if(i == n)
        {
            ans.push_back(sm);
            return;
        }
        rec(v, n, i+1, ans, sm);
        rec(v, n, i+1, ans, sm+v[i]);
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
        vector<int> v(7);
        for(int i=0; i<7; i++)cin >> v[i];
        vector<int> a = subsetSums(v, 7);
        for(auto i:a)cout << i << " ";
    }