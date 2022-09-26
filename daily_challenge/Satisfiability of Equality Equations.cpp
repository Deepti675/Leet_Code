https://leetcode.com/problems/satisfiability-of-equality-equations/
class Solution {
public:
   static bool comp(const string &a, const string &b){
        if(a[1]=='=' && b[1]=='!'){
            return 1;
        }
        return 0;
    }
    void Union(int x, int y,vector<int> &rank, vector<int> &parent)
    {
        // Find current sets of x and y
        int xset = find(x,parent);
        int yset = find(y,parent);
 
        // If they are already in same set
        if (xset == yset)
            return;
 
        // Put smaller ranked item under
        // bigger ranked item if ranks are
        // different
        if (rank[xset] < rank[yset]) {
            parent[xset] = yset;
        }
        else if (rank[xset] > rank[yset]) {
            parent[yset] = xset;
        }
 
        // If ranks are same, then increment
        // rank.
        else {
            parent[yset] = xset;
            rank[xset] = rank[xset] + 1;
        }
    }
    int find(int x,vector<int> &parent)
    {
        // Finds the representative of the set
        // that x is an element of
        if (parent[x] != x) {
 
            // if x is not the parent of itself
            // Then x is not the representative of
            // his set,
            parent[x] = find(parent[x],parent);
 
            // so we recursively call Find on its parent
            // and move i's node directly under the
            // representative of this set
        }
 
        return parent[x];
    }
    
    bool equationsPossible(vector<string>& eq) {
        vector<int>r(26,0);
        vector<int>par(26,0);
        for(int i=0;i<26;i++)
            par[i]=i;
        
        sort(eq.begin(),eq.end(),comp);
        for(int i=0;i<eq.size();i++){
            int u=eq[i][0]-'a';
            int v=eq[i][3]-'a';
            if(eq[i][1]=='='){
                Union(u,v,r,par);
                
            }
            else
            {
                if(find(u,par)==find(v,par))
                    return 0;
            }
        }
        return 1;
    }
};
