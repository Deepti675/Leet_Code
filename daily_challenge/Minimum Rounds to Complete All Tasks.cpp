https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/description/

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>umap;
        int c=0;
        for(int i=0;i<tasks.size();i++)
        {
            umap[tasks[i]]++;
        }
        for(auto x:umap)
        {
            int v=x.second;
            if(v==1)
            return -1;
            if(v%3==0)
            {
               c+=v/3; 
            }
            else
            {
                c+=v/3+1;
            }
        }
        return c;
    }
};
