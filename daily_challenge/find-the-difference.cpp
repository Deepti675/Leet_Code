//https://leetcode.com/problems/find-the-difference/
class Solution {
public:
    char findTheDifference(string s, string t) {
     int count_asci1=0;
        int count_asci2=0;
        for(char ch:s)
            count_asci1+=ch;
        for(char ch:t)
            count_asci2+=ch;
        return count_asci2-count_asci1;
    }
};
