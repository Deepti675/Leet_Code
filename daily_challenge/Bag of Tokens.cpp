https://leetcode.com/problems/bag-of-tokens/
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
         sort(tokens.begin(),tokens.end());
         int l=0;
         int r=tokens.size()-1;
         int s=0;
        int maxscore=0;
         while(l<=r){
             if(power>=tokens[l])
             {
                 power-=tokens[l++];
                 
                 s++;
                 maxscore=max(maxscore,s);
             }
             else if(s>0)
             {
                 power+=tokens[r--];
                 s--;
             }
             else
                 break;
         }
        return maxscore;
    }
};
