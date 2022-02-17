//https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int s=0;
        int subarry=0;
        for(int i=0;i<n;i++)
        {
            subarry=(n-i)*(i+1);
            if(subarry%2==0)
                subarry=subarry/2;
            else
                subarry=subarry/2+1;
            s=s+subarry*arr[i];
        }
        return s;
    }
};
