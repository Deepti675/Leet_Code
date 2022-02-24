//https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/
class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rec) {
        vector<int>v;
        int c=0;
        for(int i=0;i<rec.size();i++)   
        {
            int t=min(rec[i][0],rec[i][1]);
            v.push_back(t);
        }
        int mm=*max_element(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==mm)
                c++;
        }
        return c;
    }
};
