https://leetcode.com/problems/longest-palindrome-by-concatenating-two-letter-words/
class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int len=0;
        int res=0;
        bool f=false;
        map<string,int>mpp;
        for(int i=0;i<words.size();i++)
        {
            mpp[words[i]]++;
        }
        for(auto x:mpp)
        {
            if(x.first[0]==x.first[1])
            {
                if(x.second%2==1)
                {
                    f=true;
                    len+=(x.second-1);
                }
                else
                {
                    len+=x.second;
                }
                mpp.erase(x.first);
            }
            //if not similler characters then 
            else
            {
                string ss=x.first;
                reverse(ss.begin(),ss.end());
                if(mpp.find(ss)!=mpp.end())
                {
                   res+=min(mpp[ss],x.second)*4; 
                }
                mpp.erase(ss);
                mpp.erase(x.first);
            }
        }
        if(f)
        {
            return res+len*2+2;
        }
        return res+len*2;
    }
};
