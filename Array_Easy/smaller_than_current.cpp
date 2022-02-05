\\https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>v;
        //int no=0;
        for(int i=0;i<nums.size();i++)
        {
            int no=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j])
                    no++;
            
            }
            
            v.push_back(no);
        }
        
        return v;
    }
};
