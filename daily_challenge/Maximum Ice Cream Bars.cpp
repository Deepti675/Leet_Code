https://leetcode.com/problems/maximum-ice-cream-bars/description/
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int n= costs.size();
        int f=0;
        while(f<n && costs[f]<=coins)
        {
            coins-=costs[f];
            f++;
        }
        return f;
    }
};
