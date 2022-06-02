class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& m) {
        int n=m.size();
        int m1=m[0].size();
       vector<vector<int>> res(m1,vector<int> (n,0));
       for(int i=0;i<n;i++)
       {
           for(int j=i;j<m1;j++)
           {
              int t=m[i][j];
               m[i][j]=m[j][i];
               m[j][i]=t;
           }
       }
       return m; 
    }
};
