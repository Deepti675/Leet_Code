https://leetcode.com/problems/possible-bipartition/description/
class Solution {
public:
    bool isbi(vector<vector<int>>&adj,int N, int node, vector<int>&color)
    {
        queue<int>q;
        q.push(node);
        color[node]=1;
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            for(int ele: adj[curr])
            {
                if(color[ele]==color[curr])
                   return false;
                if(color[ele]==-1)
                {
                    color[ele]=1-color[curr];
                    q.push(ele);
                }   
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>>adj(n+1);
        for(int i=0;i<dislikes.size();i++)
        {
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        vector<int>color(n+1,-1);
        for(int i=1;i<=n;i++)
        {
            if(color[i]==-1)
            {
                if(!isbi(adj,n,i,color))
                {
                    return false;
                }
            }
        }
        return true;
    }
};
