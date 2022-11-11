https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int ind=0;
    int ans=1;
        int n=nums.size();
        if(n==0)
        {
            ans=0;
            return ans;
        }
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]!=nums[i])
            {
                ind++;
                nums[ind]=nums[i];
                ans++;
            }
        }
        return ans;
    }
};
