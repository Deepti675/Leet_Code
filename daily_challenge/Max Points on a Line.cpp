https://leetcode.com/problems/max-points-on-a-line/description/
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int maxi=2;
        int n=points.size();
        if(n<=2)
        return n;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int f=2;
                for(int k=0;k<n;k++)
                {
                    if(k!=i && k!=j)
                    {
                        if((points[j][1]-points[i][1])*(points[i][0]-points[k][0])==(points[i][1]-points[k][1])*(points[j][0]-points[i][0]))
                        f++;
                        
                    }
                    maxi=max(maxi,f);
                }
            }
        }
        return maxi;
    }
};
