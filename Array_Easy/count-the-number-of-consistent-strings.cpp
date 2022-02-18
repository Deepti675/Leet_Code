//https://leetcode.com/problems/count-the-number-of-consistent-strings/
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>s(allowed.begin(),allowed.end());
        int c=0;
        for(int i=0;i<words.size();i++){
            int t=0;
            for(int j=0;j<words[i].size();j++)
            {
                /*The set::count() is a built-in function in C++ STL which returns the number of times an element occurs in the set. It can only return 1 or 0 as the set container contains unique elements only
                syntex: set_name.count(element)
                */
                if(!s.count(words[i][j])){
                    t=1;
                    break;
                }
            }
            if(t==0)
                c++;
        }
        return c;
    }
};
