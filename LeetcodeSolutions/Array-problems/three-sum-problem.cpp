class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i=0; i<nums.size(); i++)
        {
            int target = -nums[i];
            int f = i+1;
            int b = nums.size()-1;
            
            while(f < b)
            {
                int sum = nums[f] + nums[b];
                if(sum < target)f++;
                else if(sum > target)b--;
                else 
                {
                    vector<int>res(3);
                    res[0] = nums[i];
                    res[1] = nums[f];
                    res[2] = nums[b];
                    ans.push_back(res);
                    
                    while(f < b && nums[f] == res[1])++f;
                    while(f < b && nums[b] == res[2])--b;
                    
                }
            }
            while(i+1 < nums.size() && nums[i+1] == nums[i])++i;
        }
        return ans;
    }
};