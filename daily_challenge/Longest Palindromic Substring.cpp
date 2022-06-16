class Solution {
public:
    string longestPalindrome(string s) {
       int n=s.size();
        int dp[n][n];
        string mm;
        memset(dp,0,sizeof(dp));
        int maxi=1,si=0;
        for(int i=0;i<n;i++)
        {
            dp[i][i]=1;
        }
        //2 lenigth k liye
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=1;
                maxi=2;
                    si=i;
            }
        }
        //3 length k liye
        for(int k=3;k<=n;k++)
        {
            for(int i=0;i<n-k+1;i++)
            {
                int j=i+k-1;
                if(dp[i+1][j-1]==1&&s[i]==s[j])
                {
                    dp[i][j]=1;
                    if(k>maxi)
                    {
                        maxi=k;
                        si=i;
                    }
                }
            }
        }
        mm=s.substr(si,maxi);
        return mm;

    }
};
