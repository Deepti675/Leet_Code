class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        vector<int>p(n+1,0);
        for(int i=0;i<n;i++)
        {
            p[i+1]=p[i]+nums[i];
        }
        int sum=0,res=0;
        vector<int>vv(10001,-1);
        for(int i=0;i<n;i++)
        {
            sum=max(sum,vv[nums[i]]+1);
            res=max(res,p[i+1]-p[sum]);
            vv[nums[i]]=i;
        }
        return res;
    }
    
};
