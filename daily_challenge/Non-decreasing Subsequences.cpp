https://leetcode.com/problems/non-decreasing-subsequences/description/
class Solution {
public:
    vector<vector<int>>ans;
    void dfs(vector<int>nums,vector<int>temp,int ind)
    {
        if(temp.size()>1)ans.push_back(temp);
        unordered_set<int>set;
        for(int i=ind;i<nums.size();i++)
        {
        
        if((temp.size()==0 || temp.back()<=nums[i])&&(set.find(nums[i])==set.end()))
        {
            temp.push_back(nums[i]);
            dfs(nums,temp,i+1);
            temp.pop_back();
            set.insert(nums[i]);
        }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>temp;
        dfs(nums,temp,0);
        return ans;
    }
};
