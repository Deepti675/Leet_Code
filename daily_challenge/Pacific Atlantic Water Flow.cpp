https://leetcode.com/problems/pacific-atlantic-water-flow/
class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& mat) {
        vector<vector<int>>ans;
        if(mat.size()<1)return ans;
        vector<vector<int>>pacific(mat.size(),vector<int>(mat[0].size(),0));
        vector<vector<int>>atlantic(mat.size(),vector<int>(mat[0].size(),0));
        
        for(int col=0;col<mat[0].size();col++)
        {
            f(mat,0,col,INT_MIN,pacific);
            f(mat,mat.size()-1,col,INT_MIN,atlantic);

        }
        for(int row=0;row<mat.size();row++)
        {
            f(mat,row,0,INT_MIN,pacific);
            f(mat,row,mat[0].size()-1,INT_MIN,atlantic);

        }
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(pacific[i][j]==1 && atlantic[i][j]==1)
                {
                    vector<int>v(2);
                    v[0]=i;
                    v[1]=j;
                    ans.push_back(v);
                }
            }
        }
       return ans; 
    }
    void f(vector<vector<int>>&mat,int i,int j,int prev, vector<vector<int>>&oc){
        if(i<0 || j<0 || i>=mat.size() || j>= mat[0].size())
            return;
        if(oc[i][j]==1)
            return;
        if(mat[i][j]<prev)
            return;
        oc[i][j]=1;
        f(mat,i+1,j,mat[i][j],oc);
        f(mat,i-1,j,mat[i][j],oc);
        f(mat,i,j+1,mat[i][j],oc);
        f(mat,i,j-1,mat[i][j],oc);
    }
};
