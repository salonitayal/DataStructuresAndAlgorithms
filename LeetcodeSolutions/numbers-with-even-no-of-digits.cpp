class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c = 0;
        for(auto i:nums)
        {
            int x = floor(log10(i))+1;
            if(x&1)continue;
            else ++c;
        }
        return c;
    }
};