//https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s="",d="";
        int n=word1.size();
        int n1=word2.size();
        for(int i=0;i<n;i++)
        {
            s=s+word1[i];
        }
         for(int i=0;i<n1;i++)
        {
            d=d+word2[i];
        }
        if(s==d)
            return true;
        else 
            return false;
    }
};
