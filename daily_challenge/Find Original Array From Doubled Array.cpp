https://leetcode.com/problems/find-original-array-from-doubled-array/
class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        map<int,int>mpp;
        vector<int>ans;
        int n=changed.size();
        if(n%2)
            return ans;
        for(auto x: changed)
            mpp[x]++;
        sort(changed.begin(),changed.end());
        for(auto x: changed){
            if(mpp[x]==0)
                continue;
            if(mpp[2*x]==0)
                return {};
            if(mpp[x] && mpp[2*x]){
                mpp[2*x]--;
                ans.push_back(x);
                mpp[x]--;
            }
        }
        return ans;
    }
};
