class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
       int n=nums.size();
        int sum=0;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            mpp[sum]=i;
        }  
            if(x>sum)
                return -1;
            mpp[0]=0;
            int l=0;
            sum-=x;
            int val=0;
            for(int i=0;i<n;i++)
            {
                val+=nums[i];
                if(mpp.count(val-sum))
                {
                    if(val-sum==0)
                        l=max(l,i-mpp[val-sum]+1);
                    else
                        l=max(l,i-mpp[val-sum]);
                }
            }
        
       return l==0?(sum==0?n:-1):n-l; 
    
    }
};
