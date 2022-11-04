https://leetcode.com/problems/reverse-vowels-of-a-string/description/
class Solution {
public:
    bool isvowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' ||x == 'E' || x == 'I' || x == 'O' || x == 'U')
        return true;
    return false;
}
    string reverseVowels(string s) {
        int j=s.size()-1;
        int i=0;
        while(i<j)
        {
           if(isvowel(s[i]) && isvowel(s[j]))
           {
               swap(s[i],s[j]);   
               i++;
               j--;
           }
            else if(isvowel(s[i]))
           {
                    j--;
           }
            else
           {
               i++;
           }

        }
        return s;
    }
};
