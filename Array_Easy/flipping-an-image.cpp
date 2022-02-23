//https://leetcode.com/problems/flipping-an-image/
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& im) {
      int n=im.size();
        for(int i=0;i<n;i++)
        {
            reverse(im[i].begin(),im[i].end());
            for(int j=0;j<im[i].size();j++)
            {
                im[i][j]^=1;
            }
        }
        return im;
    }
};
