https://leetcode.com/problems/single-element-in-a-sorted-array/
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int l=0,h=nums.size()-1,mid;
        while(l<=h){
            mid= l+(h-l)/2;
            if(mid%2){
                if(nums[mid-1]==nums[mid])
                    l=mid+1;
                else
                    h=mid-1;
            }
            else
            {
                if(nums[mid]==nums[mid+1])
                    l=mid+1;
                else
                    h=mid-1;
            }
        }
        return nums[l];
    }
};
