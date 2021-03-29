class Solution {
public:
    int findMaxLength(vector<int>& v) {
        unordered_map<int, int> m;
        m[0] = -1;
        int sm=0;
        int mx=0, res=0;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i] == 0)v[i]=-1;
            sm += v[i];
            v[i] = sm;
            if(m.find(v[i]) == m.end())m[v[i]]=i;    //holds first occurence 
            res = i-m[v[i]];
            if(res > mx)mx = res;
        }
        return mx;
    }
};