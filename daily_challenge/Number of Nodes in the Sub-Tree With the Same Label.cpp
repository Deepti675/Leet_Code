https://leetcode.com/problems/number-of-nodes-in-the-sub-tree-with-the-same-label/description/
class Solution {
public:
    vector<vector<int>>adjl;
    vector<int>ans;
    vector<int> dfs(string &labels,int currNode,int par)
    {
        vector<int>count(26,0);
        for(auto x: adjl[currNode])
        {
            if(x!=par){
                auto temp=dfs(labels,x,currNode);
                for(int i=0;i<26;i++)
                {
                    count[i]+=temp[i];
                }
            }
        }
        int ch= labels[currNode]-'a';
        count[ch]++;
        ans[currNode]=count[ch];
        return count;

    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        adjl.resize(n);
        ans.resize(n,1);
        for(auto x: edges)
        {
            adjl[x[0]].push_back(x[1]);
            adjl[x[1]].push_back(x[0]);
        }
        dfs(labels,0,-1);
        return ans;
    }
};
