https://leetcode.com/problems/set-mismatch/
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int n_sum= n*(n+1)/2;
        vector<int>v;
        int temp;
        int t2;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        unordered_set<int>s;
        for(int i=0;i<n;i++)
        {
            if(s.find(nums[i])!=s.end()) temp=nums[i];
            s.insert(nums[i]);
        }
        t2=n_sum-sum;
        
        v={temp,temp+t2};
        return v;
    }
};
