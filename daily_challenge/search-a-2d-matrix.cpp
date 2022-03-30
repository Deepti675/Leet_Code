//https://leetcode.com/problems/search-a-2d-matrix/
//binary search index wise
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int t) {      
        int n=matrix.size();
        int m=matrix[0].size();
        int low=0;
        int high=(n*m)-1;
        while(low<=high)
        {
            int mid=(low+(high-low)/2);
            if(matrix[mid/m][mid%m]==t)
                return true;
            if(matrix[mid/m][mid%m]<t)
                low=mid+1;
            else
                high=mid-1;
        }
        return false;        
    }
};  
