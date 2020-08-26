class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> returnVec;
        for(int element: nums){
            if(nums[abs(element)-1] > 0) nums[abs(element)-1] *= -1;
            else returnVec.push_back(abs(element));
		}
        return returnVec;
    }
};