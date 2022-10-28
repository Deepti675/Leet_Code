https://leetcode.com/problems/group-anagrams/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL);
        int n=strs.size();
        unordered_map<string,vector<string>>mymap;
        string temp;
        for(int i=0;i<n;i++)
        {
            temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mymap[strs[i]].push_back(temp);
        }
        vector<vector<string>>res;
        for(auto it= mymap.begin();it!=mymap.end();it++)
            res.push_back(it->second);
        return res;
        
    }
};
