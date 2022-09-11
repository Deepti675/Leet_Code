
//link- https://leetcode.com/problems/build-array-from-permutation/
//1.method
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]+(nums[nums[i]]%n)*n;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]/n;
        }
        return nums;
    }
};
//2.method(STL use)
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(nums[nums[i]]);
        }
        for(int i=0;i<n;i++){
            nums.erase(nums.begin());
        }
        return nums;
    }
    
};
