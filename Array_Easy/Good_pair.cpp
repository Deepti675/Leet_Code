//https://leetcode.com/problems/number-of-good-pairs/
//Time com- O(n^2)
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j])
                    sum++;
            }
        }
        return sum;
    }
};
//time Com-O(n)
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        unordered_map<int,int>umap;
        for(int i=0;i<n;i++){
            sum+=umap[nums[i]];
            umap[nums[i]]++;
        }
        return sum;
    }
};
