https://leetcode.com/problems/detect-capital/description/
class Solution {
public:
    bool detectCapitalUse(string word) {
        int f=0;
        int m;
        
        for(int i=0;i<word.length();i++)
        {
            
            if(isupper(word[i]))

            {
                f++;
                m=i;
            }     
        }
       
            if( f == word.size() || f==0 || (f==1 && m==0))
            {
                    return true;
            }
       
       return false; 
    }
};
