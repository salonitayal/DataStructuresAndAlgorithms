class Solution {
public:
    vector<int> findErrorNums(vector<int>& v) {
     vector<int> res;
        sort(v.begin(), v.end());
        for(int i=0; i<v.size(); i++)
        {
            if(v[abs(v[i])-1] > 0)v[abs(v[i])-1]*=-1;   //taking v[i] as index
            else res.push_back(abs(v[i]));
        }
        for(int i=0; i<v.size(); i++)
            if(v[i] > 0)res.push_back(i+1);
        
        return res;
    }
};