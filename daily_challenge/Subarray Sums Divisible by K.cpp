https://leetcode.com/problems/subarray-sums-divisible-by-k/description/
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int>mpp;
        long long int sum = 0;
        mpp[0]++;
        for(int i = 0;i < nums.size();i++){
            sum += nums[i];
            int temp = sum % k;
            if(temp < 0){
                temp += k;
            }
            mpp[temp]++;
        }
        int ans = 0;
        for(auto it : mpp){
            int temp = it.second;
            ans += (temp * (temp-1)) / 2;
        }
        return ans;

    }
};
