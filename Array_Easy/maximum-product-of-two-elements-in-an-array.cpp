//https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int m=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                m=max(m,(nums[i]-1)*(nums[j]-1));
            }
        }
        return m;
    }
};
