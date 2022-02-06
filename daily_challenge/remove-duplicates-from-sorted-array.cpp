//https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<3)
            return n;
        int ptr_slow=2;
        int ptr_fast=2;
        while(ptr_fast<n){
            if(nums[ptr_fast]!=nums[ptr_slow-2]){
                nums[ptr_slow]=nums[ptr_fast];
                ptr_slow++;
                ptr_fast++;
            }
            else
                ptr_fast++;
        }
        return ptr_slow;
    }
};
