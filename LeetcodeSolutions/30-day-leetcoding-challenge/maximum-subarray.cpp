#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int max_current, max_global;
        max_current = max_global = nums[0];
        
        for(int i=1; i<nums.size(); i++)
        {
            max_current = max(nums[i], max_current+nums[i]);
            if(max_current > max_global)max_global = max_current;
        }
        return max_global;
    }

int main()
{
    int n; cin >> n; 
    vector<int> v(n);
    for(int i=0; i<n; i++)cin >> v[i];
    cout << maxSubArray(v);
}