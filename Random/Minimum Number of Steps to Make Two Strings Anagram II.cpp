https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram-ii/
class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>v(26,0);
        int c=0;
        for(auto it:s)v[it-'a']++;
        for(auto it:t)v[it-'a']--;
        for(int i=0;i<26;i++)c+=abs(v[i]);
        return c;
    }
};
