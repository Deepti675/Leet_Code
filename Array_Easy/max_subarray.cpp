//maximum subarray 
/*Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
A subarray is a contiguous part of an array.
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int initial_max=nums[0];
        int new_max=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            new_max=max(nums[i],new_max+nums[i]);
            initial_max=max(new_max,initial_max);
        }
        return initial_max;
    }
};
