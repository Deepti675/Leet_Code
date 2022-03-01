//https://leetcode.com/problems/counting-bits/
class Solution {
public:
    vector<int> countBits(int n) {
        //int c=0;
        vector<int>v(n+1,0);
        for(int i=0;i<n+1;i++)
        {
            v[i]=(v[i/2]+i%2);
        }
        return v;
    }
};
