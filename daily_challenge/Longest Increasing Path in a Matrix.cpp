//very interasting question 
class Solution {
public:
    bool limits(int i,int j,int r,int c)
    {
        return (i>=0&&i<r&&j>=0&&j<c);
    }
    int fundp(vector<vector<int>>&mat,vector<vector<int>>&dp,int i,int j,int r,int c)
    {
        int c1=0,c2=0,c3=0,c4=0;
        if(!limits(i,j,r,c))return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(limits(i+1,j,r,c)&&mat[i+1][j]>mat[i][j])
        {
            c1=fundp(mat,dp,i+1,j,r,c);
        }
        if(limits(i-1,j,r,c)&&mat[i-1][j]>mat[i][j])
        {
            c2=fundp(mat,dp,i-1,j,r,c);
        }
        if(limits(i,j+1,r,c)&&mat[i][j+1]>mat[i][j])
        {
            c3=fundp(mat,dp,i,j+1,r,c);
        }
        if(limits(i,j-1,r,c)&&mat[i][j-1]>mat[i][j])
        {
            c4=fundp(mat,dp,i,j-1,r,c);
        }
       dp[i][j]=1+ max(c1,max(c2,max(c3,c4)));
        return dp[i][j];

    }
    int longestIncreasingPath(vector<vector<int>>&mat) {
        int r=mat.size();
        int c=mat[0].size();
        int res=1;
        vector<vector<int>>dp(r,vector<int>(c,-1));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(dp[i][j]==-1)
                {
                    res=max(res,fundp(mat,dp,i,j,r,c));
                }
            }
        }
        return res;
    }
};
