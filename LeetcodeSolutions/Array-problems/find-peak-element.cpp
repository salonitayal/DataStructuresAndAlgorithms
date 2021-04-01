class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int x = INT_MIN, ans;
        for(int i=0; i<nums.size(); i++)
        {
            if(x < nums[i])
            {
                x = nums[i];
                ans = i;
            }
        }
        return ans;
    }
};