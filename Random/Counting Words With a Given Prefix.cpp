//https://leetcode.com/problems/counting-words-with-a-given-prefix/
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int c=0;
        for(auto s:words){
          int pos=s.find(pref);
            if(pos==0)
                c++;
        }
        return c;
    }
};
