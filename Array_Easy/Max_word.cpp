\\https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
       int m=INT_MIN;
        for(auto sen: sentences){
            int s=1;
            for(auto ch:sen){
                if(ch==' ')
                    s++;
            }
            m=max(m,s);
        }
        return m;
    }
};
