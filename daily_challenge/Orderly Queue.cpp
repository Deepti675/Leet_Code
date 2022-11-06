https://leetcode.com/problems/orderly-queue/description/
class Solution {
public:
    string orderlyQueue(string s, int k) {
        int n=s.size();
        if(k==1)
        {
            string temp=s+s;
            string temp1=s;
            for(int i=1;i<n;i++)
            {
                string temp2= temp.substr(i,n);
                if(temp2<temp1)
                {
                    temp1=temp2;
                }
            }
            return temp1;
        }
        sort(s.begin(),s.end());
        return s;
    }
};
