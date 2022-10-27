https://leetcode.com/problems/image-overlap/
class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n=img1.size();
        vector<pair<int,int>>v1,v2;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(img1[i][j]==1)
                    v1.push_back({i,j});
                if(img2[i][j]==1)
                    v2.push_back({i,j});
                
            }
        }
        int res=0;
        map<pair<int,int>,int>umap;
        for(auto x1:v1)
        {
            for(auto x2:v2)
            {
                int a=x1.first-x2.first;
                int b=x1.second-x2.second;
                umap[{a,b}]++;
                res=max(res,umap[{a,b}]);
            }
        }
        return res;
    }
};
