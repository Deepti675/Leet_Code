//https://leetcode.com/problems/find-first-palindromic-string-in-the-array/
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        string m="";
        for(int i=0;i<words.size();i++)
        {
            int n=words[i].length();
            for(int j=0;j<n;j++)
            {
                
                if(words[i][j]!=words[i][n-j-1])
                {
                    break;
                }
                if(j>=n/2)
                    return m=words[i];
                
            }
        }
        return m;
    }
};
