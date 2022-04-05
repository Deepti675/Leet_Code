//https://leetcode.com/problems/container-with-most-water/
class Solution {
public:
    int maxArea(vector<int>& h) {
        int m=0,l=0;
        int r=h.size()-1;
        while(l<r)
        {
            int left_h=h[l];
            int right_h=h[r];
            int min_height=min(left_h,right_h);
            m=max(m,min_height*(r-l));
            if(left_h<right_h)
                l++;
            else
                r--;
        }
       
        return m;
    }
};
