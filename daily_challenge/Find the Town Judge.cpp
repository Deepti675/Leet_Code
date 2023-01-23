https://leetcode.com/problems/find-the-town-judge/description/
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>v(n+1);
        if(trust.size()==0 && n==1)
        return 1;
        for(auto x: trust)
        {
            v[x[0]]--;
            v[x[1]]++;
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==n-1)return i;
        }
        return -1;

    }
};
