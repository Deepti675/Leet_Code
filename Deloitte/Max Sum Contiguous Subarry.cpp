https://www.interviewbit.com/problems/max-sum-contiguous-subarray/
int Solution::maxSubArray(const vector<int> &A) {
    int temp1=A[0];
    int temp2=A[0];
    for(int i=1;i<A.size();i++)
    {
        temp1=max(A[i],temp1+A[i]);
        temp2=max(temp1,temp2);
    }
    return temp2;
}
