https://leetcode.com/problems/add-binary/
class Solution {
public:
    string addBinary(string a, string b) {
        int ai= a.length()-1;
        int bj= b.length()-1;
        int c=0;
        string res;
        while(ai>=0 || bj>=0 || c)
        {
            if(ai>=0)
            {
                c+=(a[ai]-'0');
                ai--;
            }
            if(bj>=0)
            {
                c+=(b[bj]-'0');
                bj--;
            }
            res+=((c%2)+'0');
            c=c/2;
            
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
