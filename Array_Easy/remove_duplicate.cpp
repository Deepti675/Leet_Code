//Remove Duplicates from Sorted Array
/*Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).*/

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
