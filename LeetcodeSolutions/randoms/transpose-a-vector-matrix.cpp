class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& v) {
        int m = v[0].size(), n = v.size();
        vector<vector<int>> a(m, vector<int> (n));
        //cout << m << n;
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                a[i][j] = v[j][i];
        return a;
    }
};