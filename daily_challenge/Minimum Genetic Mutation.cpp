https://leetcode.com/problems/minimum-genetic-mutation/
class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        queue<string>q;
        unordered_set<string>vis;
        q.push(start);
        vis.insert(start);
        int c=0;
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                string node= q.front();
                q.pop();
                if(node==end)
                    return c;
                for(char ch: "ACGT")
                {
                    for(int j=0;j<node.size();j++)
                    {
                        string adj_node=node;
                        adj_node[j]=ch;
                        if(!vis.count(adj_node) && find(bank.begin(),bank.end(),adj_node)!=bank.end())
                        {
                            q.push(adj_node);
                            vis.insert(adj_node);
                        }
                    }
                }
                
            }
            c++;
        }
        return -1;
    }
};
