https://leetcode.com/problems/max-sum-of-rectangle-no-larger-than-k/
class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int m=matrix.size();
        int n=matrix[0].size();
        int max_sum= INT_MIN;
        for(int i=0;i<m;i++){
            int arr[n];
            memset(arr,0,sizeof(arr));
            for(int r=i;r<m;++r){
                for(int c=0;c<n;++c)
                    arr[c]+=matrix[r][c];
                set<int>st;
                int curr_sum=0;
                st.insert(0);
                for(int val: arr){
                    curr_sum+=val;
                    auto it = st.lower_bound(curr_sum - k);
                    if(it!=st.end())
                        max_sum=max(max_sum,curr_sum-*it);
                    st.insert(curr_sum);
                }
            }
        }
        return max_sum;
    }
};
