https://leetcode.com/problems/pascals-triangle/
class Solution {
public:
    vector<vector<int>> generate(int row_num) {
    
    vector<vector<int>>vv(row_num);
    for(int i=0;i<row_num;i++)
    {
        vv[i].resize(i+1);//####
        int val=1;
        for(int j=0;j<=i;j++)
        {
            vv[i][j]=val;
            val=val*(i-j)/(j+1);
        }
    }
        return vv;
 }
};
