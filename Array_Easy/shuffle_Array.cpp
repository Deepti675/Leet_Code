//https://leetcode.com/problems/shuffle-the-array/
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>v(2*n);
        int i=0;
        while(i<nums.size()){
            if(i%2==0)
            {
                v[i]=nums[(i+1)/2];
                
            }  
            else
            {
                v[i]=nums[n];
                n++;
            }
            i++;
        }
        return v;
    }
};
