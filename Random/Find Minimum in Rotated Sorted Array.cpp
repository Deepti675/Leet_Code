https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
class Solution {
public:
    int findMin(vector<int>& nums) {
        //else if ki dikkat thi he bhagwan
      int n=nums.size();  
      int s=0; 
      int e=n-1;
      
        int res=0;
      while(s<=e){
          if(nums[s]<nums[e])
              return nums[s];
          int mid = s+(e-s)/2;
          int nx= (mid+1)%n;
          int pr= (mid-1+n)%n;
          if(nums[mid]<=nums[nx]  &&  nums[mid]<=nums[pr])
              return nums[mid];
          if(nums[mid]<=nums[e])
              e=mid-1;
          if(nums[mid]>=nums[s])
              s=mid+1;
      }
       return 0;
   
    }
};
