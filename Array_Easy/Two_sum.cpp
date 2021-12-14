/*Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].*/
//brute force method solution//
 class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]==target-nums[i])
                {
                    v={i,j};
                    return v;
                }
            }
        }
        return v;
        }
        
    
};
//Hash Map method//
