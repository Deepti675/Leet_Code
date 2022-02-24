//https://leetcode.com/problems/minimum-time-visiting-all-points/
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n=points.size();
        int c=0;
              for(int i=0;i<n-1;i++)
              {
                 int a=abs(points[i][0]-points[i+1][0]);
                 int b= abs(points[i][1]-points[i+1][1]);
                  c+=max(a,b);
              }
        return c;
    }
};
