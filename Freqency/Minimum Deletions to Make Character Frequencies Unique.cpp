//https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/
class Solution {
public:
    int minDeletions(string s) {
        vector<int>v(26);
        
        
        for(auto i:s)
        {
            v[i-'a']++;
        }
        sort(v.begin(),v.end(),greater<int>());
       int freq=v[0];
        int res=0;
        for(auto i:v)
        {
            if(i>freq)
            {
                if(freq>0)
                    res+=(i-freq);
                else
                    res+=i;
            }
            freq=min(freq-1,i-1);
        }
        return res;
    }
    
};
