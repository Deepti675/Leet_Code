class Solution {
public:

int LCS1(string x,string y,int n,int m)
{
    int static t[1001][1001];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<m+1;j++)
        {
            if(i==0||j==0)
            t[i][j]=0;
        }
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(x[i-1]==y[j-1])
            {
                t[i][j]=1+t[i-1][j-1];
            }
            else
            {
                t[i][j]=max(t[i][j-1],t[i-1][j]);
            }
        }
    }
    return t[n][m];
}
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        int ans=LCS1(word1,word2,n,m);
        return n+m-2*ans;
    }
};
