//https://leetcode.com/problems/sum-of-all-subset-xor-totals/
class Solution {
public:
    int sum=0;
    void fun(vector<int>&A,int i,int v)
    {
        if(i==A.size())
            sum+=v;
        else
        {
            fun(A,i+1,v^A[i]);
            fun(A,i+1,v);
        }
    }
    int subsetXORSum(vector<int>& nums) {
        fun(nums,0,0);
        return sum;
    }
};
