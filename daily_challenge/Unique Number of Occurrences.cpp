https://leetcode.com/problems/unique-number-of-occurrences/description/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       unordered_map<int,int>umap;
       for(int i=0;i<arr.size();i++)
       {
           umap[arr[i]]++;
       } 
       unordered_set<int>s;
       for(auto x:umap)
       {
           s.insert(x.second);
       }
       if(umap.size()==s.size())
       return true;
       else
        return false;
    }
};
