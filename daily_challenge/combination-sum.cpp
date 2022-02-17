//https://leetcode.com/problems/combination-sum/
class Solution {
public:
    void findCombination(int ind,int target,vector<int>&arr,vector<vector<int>>&res,vector<int>rec_arr)
    {
        if(ind==arr.size())
        {
            if(target==0)
                res.push_back(rec_arr);
            return;
        }
        if(arr[ind]<=target){
            rec_arr.push_back(arr[ind]);
            findCombination(ind,target-arr[ind],arr,res,rec_arr);
            rec_arr.pop_back();
        }
        findCombination(ind+1,target,arr,res,rec_arr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>rec_arr;
        findCombination(0,target,candidates,res,rec_arr);
        return res;
    }
};
