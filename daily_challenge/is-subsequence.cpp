//Dynamic programming solution
//https://leetcode.com/problems/is-subsequence/
class Solution{
  public:
    bool lcs(string s,string t,int n,int m)
    {
        int DD[n+1][m+1],res=INT_MIN;
        memset(DD,0,sizeof(DD));
        if(n==0)
            return true;
        if(m==0)
            return false;
         for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1]==t[j-1])DD[i][j]=1+DD[i-1][j-1];
                else DD[i][j]=max(DD[i-1][j],DD[i][j-1]);
                res=max(res,DD[i][j]);
            }
         }
        return res==n?true:false;
        
    }
    bool isSubsequence(string s,string t){
        int n=s.size();
        int m=t.size();
        return lcs(s,t,n,m);
    }
};
