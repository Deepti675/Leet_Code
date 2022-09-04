https://leetcode.com/problems/longest-subsequence-with-limited-sum/
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int>res(queries.size(),-1);
        for(int i=0;i<queries.size();i++){
            int add=0;
            int c=0;
            for(int j=0;j<nums.size();j++){
                add+=nums[j];
                if(add<=queries[i])
                    c++;
                else
                    break;
            }
           res[i]=max(res[i],c);
        }
        return res;
    }
};
