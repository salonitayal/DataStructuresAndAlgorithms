class Solution {
public:
    int singleNumber(vector<int>& v) {
        int x = 0;
        for(int i=0; i<v.size(); i++)x ^= v[i];
        return x;
    }
};