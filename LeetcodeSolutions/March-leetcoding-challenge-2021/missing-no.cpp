class Solution {
public:
    int missingNumber(vector<int>& v) {
        int res=0;
        for(auto i:v)res^=i;
        for(int i=0; i<=v.size(); i++)res^=i;
        return res;
    }
};