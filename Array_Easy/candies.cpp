\\https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
     int m=INT_MIN;
        for(auto i:candies)
            m=max(m,i);
        vector<bool>can;
        for(int i=0;i<candies.size();i++)
            if(candies[i]+extraCandies>=m)
                can.push_back(true);
            else
                can.push_back(false);
     return can;
    }
};
