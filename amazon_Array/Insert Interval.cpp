class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& newI) {
               vector<vector<int>>vv;
               int n=in.size();
        int i=0;
        while(i<n&& in[i][1]<newI[0])vv.push_back(in[i++]);
        //overlapping intervals
        vector<int>MI=newI;
        while(i<n&&in[i][0]<=newI[1])
        {
            MI[0]=min(MI[0],in[i][0]);
            MI[1]=max(MI[1],in[i][1]);
            i++;
        }
        vv.push_back(MI);
        while(i<n)vv.push_back(in[i++]);
      return vv;         
    }
};
