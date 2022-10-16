https://leetcode.com/problems/minimum-difficulty-of-a-job-schedule/
class Solution {
public:
    int dp[301][11];
    int f(vector<int>& job, int n,int i,int d){
        if(d==1)
            return *max_element(begin(job)+i,end(job));
        if(dp[i][d]!=-1)
            return dp[i][d];
        int ans=INT_MAX;
        int curr=INT_MIN;
        for(int j=i;j<=n-d;j++){
            curr=max(curr,job[j]);
            ans=min(ans,curr+f(job,n,j+1,d-1));
        }
        return dp[i][d]=ans;
    }
    int minDifficulty(vector<int>& job, int d) {
        memset(dp,-1,sizeof(dp));
        int n=job.size();
        if(n<d)
            return -1;
        return f(job,n,0,d);
    }
};
