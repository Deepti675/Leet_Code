https://leetcode.com/problems/continuous-subarray-sum/
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       unordered_map<int,int>umap;
        umap[0]=-1;
        int s=0;
        
       for(int i=0;i<nums.size();i++)
       {
           s+=nums[i];
           if(k!=0)
           {
               s=s%k;
           }
           if(umap.find(s)!=umap.end())
           {
               if(i-umap[s]>1)
                   return true;
           }
           else
           {
               umap[s]=i;
           }
           
       }
        return false;
    }
};
