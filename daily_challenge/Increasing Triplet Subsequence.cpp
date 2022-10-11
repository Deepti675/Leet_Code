https://leetcode.com/problems/increasing-triplet-subsequence/
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int temp1=INT_MAX;
        int temp2=INT_MAX;
        for(auto x: nums)
        {
            if(x<temp1)
            {
                temp1=x;
            }
            else if(temp1<x && x< temp2)
            {
                temp2=x;
            }
            else if(x>temp2)
            {
                return true;
            }
        }
        return false;
    }
};
