https://leetcode.com/problems/toeplitz-matrix/

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<matrix[0].size()-1;j++)
            {
                if(matrix[i-1][j]!=matrix[i][j+1])return false;
            }
        }
        return true;
    }
};
