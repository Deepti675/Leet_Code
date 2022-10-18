https://leetcode.com/problems/count-and-say/
class Solution {
public:
    string countAndSay(int n) {
      string s="1";
        for(int i=2;i<=n;i++)
        {
            string ss=s;
            int l=s.size();
            int j=0;
            s="";
            while(j<l)
            {
              int c=j;
              while(j<l && ss[j]==ss[c])
                  c++;
              s+=to_string(c-j)+ss[j];  
                j=c;
            }
        }
        return s;
    }
};
