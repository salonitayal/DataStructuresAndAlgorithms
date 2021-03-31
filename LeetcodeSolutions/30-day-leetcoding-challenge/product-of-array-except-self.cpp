class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int n = v.size()-1;
        vector<int> res(n+1);
        res[n] = v[n];
        for(int i=n-1; i>=0; i--)res[i] = v[i]*res[i+1];        // gives res[24,24,12,4]
        int p = v[0];                                                     
        res[0] = res[1];
        for(int i=1; i<n; i++)
        {
            res[i] = p*res[i+1];
            p *= v[i];
        }
        res[n] = p;
     return res;   
    }
};