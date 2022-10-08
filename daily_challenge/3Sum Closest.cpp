https://leetcode.com/problems/3sum-closest/
class Solution {
public:
     
    int threeSumClosest(vector<int>& nums, int target) {
       
        sort(nums.begin(),nums.end()); //sort the number
        int n=nums.size();//find length of the array
        int diff=INT_MAX,result_sum=0;
        for(int i=0;i<n-2;i++)
        {
            int start=i+1,end=n-1;
            while(start<end)
            {
                int sum=nums[i]+nums[start]+nums[end];//calculating the sum
                if(sum==target)//if the smallest difference b/w target and sum =0,return sum
                    return target;

                int temp=abs(target-sum);
                if(temp<=diff)
                {
                    diff=temp;
                    result_sum=sum;
                }   
                if(sum<target)
                        start++;//left pointer moves forward
                else 
                        end--;//right pointer moves back
            }  
        }
        return result_sum; 
    }

    
};
