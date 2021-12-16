/*Search insert position 
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.

Input: nums = [1,3,5,6], target = 2
Output: 1
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int h=n-1;
        
        while(l<=h)
        {
             int mid=(l+h)/2;
            if(target==nums[mid])
                return mid;
            else if(target<nums[mid])
            {
                h=mid-1;
                
            }
            else
                l=mid+1;
            
        }
      return l;  
    }
};
