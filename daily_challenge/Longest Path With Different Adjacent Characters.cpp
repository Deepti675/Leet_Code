https://leetcode.com/problems/longest-path-with-different-adjacent-characters/description/
class Solution {
public:
int ans=1;
vector<vector<int>>adjl;
    int dfs(int node,int par,string &s)
    {
        int maxpath=1;
        for(auto x: adjl[node])
        {
            if(x!=par){
                int temp=dfs(x,node,s);
                if(s[node]!=s[x])
                {
                    ans=max(ans,maxpath+temp);
                    maxpath=max(maxpath,1+temp);
                }
            }
        }
        return maxpath;
    }
    int longestPath(vector<int>& parent, string s) {
        int n=parent.size();
        adjl.resize(n);
        for(int i=1;i<n;i++)
        {
            adjl[parent[i]].push_back(i);
            adjl[i].push_back(parent[i]);
        }
        dfs(0,-1,s);
        return ans;
    }
};
