//https://leetcode.com/problems/shuffle-string/
//Method1
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int i=0;
        while(i<s.size()){
            if(indices[i]!=i)
            {
                swap(s[i],s[indices[i]]);
                swap(indices[i],indices[indices[i]]);
                
            }
            else
                i++;
        }
        return s;
    }
};
//Method2 with use of unorderd map
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
      string res;
        unordered_map<int,char>umap;
        for(int i=0;i<s.size();i++)
            umap[indices[i]]=s[i];
        sort(indices.begin(),indices.end());
        for(int i=0;i<s.size();i++)
            res.push_back(umap[indices[i]]);
        return res;
    }
};
