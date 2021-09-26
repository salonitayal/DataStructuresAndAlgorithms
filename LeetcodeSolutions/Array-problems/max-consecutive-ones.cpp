class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0, ans = 0;
        for(auto i:nums)
        {
            if(i==1){
                ++max;
                if(max > ans)ans = max;
            }
            else{
                max = 0;
            }
        }
        return ans;
    }
};