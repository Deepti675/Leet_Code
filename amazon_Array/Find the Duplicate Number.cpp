class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mpp;
        int k;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.second!=1)
                k=it.first;
        }
        return k;
    }
};
