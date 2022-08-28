https://leetcode.com/problems/sort-the-matrix-diagonally/
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        vector<int>temp;
        int n=mat.size();
        int m=mat[0].size();
      //bottom to diagonal 
        for(int row=0;row<n;row++){
            temp.clear();
            for(int j=0,i=row;j<m&&i<n;j++,i++)
                temp.push_back(mat[i][j]);
            sort(temp.begin(),temp.end());
            for(int j=0,i=row;j<m&&i<n;j++,i++)
                mat[i][j]=temp[j];
        }
      // top to diagonal 
        for(int col=1;col<m;col++){
            temp.clear();
            for(int i=0,j=col;i<n&&j<m;i++,j++)
                temp.push_back(mat[i][j]);
            sort(temp.begin(),temp.end());
            for(int i=0,j=col;i<n&&j<m;i++,j++)
                mat[i][j]=temp[i];
        }
        return mat;
    }
};
