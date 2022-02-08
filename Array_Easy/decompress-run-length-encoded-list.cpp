//https://leetcode.com/problems/decompress-run-length-encoded-list/
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        for(int i=0;i<n;i+=2){
            int val=nums[i+1];
            int fre=nums[i];
            for(int j=0;j<fre;j++){
                v.push_back(val);
            }
        }
        return v;
    }
};
