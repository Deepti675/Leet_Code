class Solution {
public:
    int totalNQueens(int n) {
        vector<bool>leftrow(n,0),upperdiagonal(2*n-1,0),lowerdiagonal(2*n-1,0);
        return solve(0,leftrow,upperdiagonal,lowerdiagonal,n);
        
    }
    int solve(int col,vector<bool>&leftrow,vector<bool>&upperdiagonal,vector<bool>&lowerdiagonal,int n)
    {
       
        int count=0;
        if(col==n)
            return 1;
        for(int row=0;row<n;row++)
        {
            if(leftrow[row]==0&&lowerdiagonal[row+col]==0&&upperdiagonal[n-1+col-row]==0)
            {
                leftrow[row]=true;
               lowerdiagonal[row+col]=true;
               upperdiagonal[n-1+col-row]=true;
               count+=solve(col+1,leftrow,upperdiagonal,lowerdiagonal,n);
               leftrow[row]=false;
               lowerdiagonal[row+col]=false;
               upperdiagonal[n-1+col-row]=false;
            }
        }
        return count;
    }
};
