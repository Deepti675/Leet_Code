//https://leetcode.com/problems/two-city-scheduling/
class Solution {
public:
   static bool profitCost(vector<int>&CityA,vector<int>&CityB)
    {
        return (CityA[1]-CityA[0])>(CityB[1]-CityB[0]);
    }
    int twoCitySchedCost(vector<vector<int>>& c) {
        int res=0;
        int n=c.size();
        sort(c.begin(),c.end(),profitCost);
        for(int i=0;i<n;i++)
        {
            res+=i<n/2?c[i][0]:c[i][1];
        }
        return res;
    }
};
