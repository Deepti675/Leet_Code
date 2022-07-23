https://leetcode.com/problems/count-of-smaller-numbers-after-self/
class Solution {
public:
    void merge(vector<pair<int,int>>&nums,int st,int ed,vector<int>&ans){
        int mid=(st+ed)/2;
        int i=st;
        int j=mid+1;
        int k=0;
        vector<pair<int,int>>temp(ed-st+1);
        while(i<=mid&&j<=ed){
            if(nums[i].second>nums[j].second){
                ans[nums[i].first]+=ed-j+1;
                temp[k++]=nums[i++];
            }
            else
                temp[k++]=nums[j++];
        }
        while(i<=mid)temp[k++]=nums[i++];
        while(j<=ed)temp[k++]=nums[j++];
        k=0;
        for(int l=st;l<=ed;l++)
            nums[l]=temp[k++];
    }
    void mergesort(vector<pair<int,int>>&nums,int st,int ed,vector<int>&ans){
        if(st>=ed)return;
        int mid=(st+ed)/2;
        mergesort(nums,st,mid,ans);
        mergesort(nums,mid+1,ed,ans);
        merge(nums,st,ed,ans);
    }
    vector<int> countSmaller(vector<int>& nums) {
           int n=nums.size();
           vector<int>res(n,0);
        vector<pair<int,int>>pq(n);
        for(int i=0;i<n;i++)
            pq[i]={i,nums[i]};
        mergesort(pq,0,n-1,res);
        return res;
        
    }
};
