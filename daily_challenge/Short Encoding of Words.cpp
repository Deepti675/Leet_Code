//https://leetcode.com/problems/short-encoding-of-words/
class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL);
        int ans=0;
        
        set<string>s2(words.begin(),words.end());
        for(auto it: s2)
        {
            for(int i=1;i<it.size();i++)
                s2.erase(it.substr(i));
        }
        //for adding hash cahr i have to add one extra count
        for(auto it: s2)
        {
            ans+=it.size()+1;
        }
        return ans;
    }
};
