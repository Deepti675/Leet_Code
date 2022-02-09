//https://leetcode.com/problems/count-items-matching-a-rule/
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
       int res=0;
        int type= ruleKey[0]=='t'?0:ruleKey[0]=='c'?1:2;
        int n=items.size();
        for(int i=0;i<n;i++)
            res=items[i][type]==ruleValue?res+1:res;
        return res;
        }
};
