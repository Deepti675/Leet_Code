https://leetcode.com/problems/maximum-score-from-performing-multiplication-operations/
class Solution {
public:
    vector<vector<int>>dp;
    int f(int i,int left,int right, vector<int>&nums, vector<int>&mul){
        int m=mul.size();
        if(i==m)
            return 0;
        if(dp[i][left]!=INT_MAX)return dp[i][left];
        int l= mul[i]*nums[left]+f(i+1,left+1,right,nums,mul);
        int r= mul[i]*nums[right]+f(i+1,left,right-1,nums,mul);
        return dp[i][left]=max(l,r);
    }
    int maximumScore(vector<int>& nums, vector<int>& mul) {
        int n=nums.size();
        int m=mul.size();
        // vector<vector<int>>dp(m+1,vector<int>(m+1,-1));
        dp.assign(m+1,vector<int>(m+1,INT_MAX));
        return f(0,0,n-1,nums,mul);
        
    }
};
