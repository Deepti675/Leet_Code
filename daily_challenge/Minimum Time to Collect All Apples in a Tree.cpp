https://leetcode.com/problems/minimum-time-to-collect-all-apples-in-a-tree/description/
class Solution {
public:
    vector<vector<int>>adjl;
    int fun(vector<bool>& hasApple,int currNode,int par,int dis)
    {
        int disChild=0,disroot=0;
        for(auto x: adjl[currNode])
        {
            if(x!=par)
            {
                disroot=fun(hasApple,x,currNode,dis+1);
                if(disroot!=0)
                disChild+=disroot-dis;
            }
        }
        return disChild || hasApple[currNode] ? disChild+dis : 0;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        adjl.resize(n);
        for(auto x: edges)
        {
            adjl[x[0]].push_back(x[1]);
            adjl[x[1]].push_back(x[0]);
        }
        return fun(hasApple,0,-1,0)*2;
    }
};
