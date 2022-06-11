
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
         v.resize(3);
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(binary_search(nums.begin()+j+1,nums.end(),-nums[i]-nums[j]))
                {
                    v[0]=nums[i];
                    v[1]=nums[j];
                    v[2]=-nums[i]-nums[j];
                    sort(v.begin(),v.end());
                    s.insert(v);
                }
                
            }
        }
        vector<vector<int>>ans;
        for(auto it:s)
        {
            ans.push_back(it);
        }
      return ans;  
    }
};
