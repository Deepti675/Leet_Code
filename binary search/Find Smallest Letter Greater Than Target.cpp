https://leetcode.com/problems/find-smallest-letter-greater-than-target/
class Solution {
public:
    char nextGreatestLetter(vector<char>& lett, char tar) {
        char res;
        int s=0;
        int l=lett.size()-1;
        int mid;
        if(tar>=lett[l])
            return lett[0];
        while(s<=l){
            mid=s+(l-s)/2;
            if(lett[mid]==tar)
            {
                s=mid+1;
            }
            if(lett[mid]<tar)
            {
                s=mid+1;
            }
            if(lett[mid]>tar)
            {
                res=lett[mid];
                l=mid-1;
            }
        }
        return res;
    }
};
