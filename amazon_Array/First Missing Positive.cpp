//TC=O(N) and SC=O(N) solution
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int>s;
        int n=nums.size();
      for(int i=0;i<nums.size();i++)
      {
          s[nums[i]]=true;
      }
      for(int i=1;i<=n+1;i++)
      {
          if(s[i]==false)
              return i;
      }
             return 0;
    }
};
