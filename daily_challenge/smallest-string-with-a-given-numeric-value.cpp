//https://leetcode.com/problems/smallest-string-with-a-given-numeric-value/
class Solution {
public:
    string getSmallestString(int n, int k) {
        vector<int>ans(n,1);
            k=k-n;
            int i=n-1;
        while(k!=0)
        {
            if(k>25)
            {
                ans[i]=26;
                i--;
                k=k-25;
            }
            else
            {
                ans[i]=k+1;
                k=0;
            }
        }
        //converting int to ascci value
        string res;
        for(int i=0;i<ans.size();i++)
        {
            res+=char(ans[i]+96);
        }
        return res;
    }
};  
