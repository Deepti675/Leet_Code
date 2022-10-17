https://leetcode.com/problems/check-if-the-sentence-is-pangram/
class Solution {
public:
    bool checkIfPangram(string sentence) {
        for(int i=0;i<26;i++)
        {
            char ch=i+'a';
            if(sentence.find(ch)==string::npos)
                return false;
        }
        return true;
    }
};
