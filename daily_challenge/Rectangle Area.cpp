https://leetcode.com/problems/rectangle-area/description/
class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int ar1=(ax2-ax1)*(ay2-ay1);
        int ar2=(bx2-bx1)*(by2-by1);
        int cx1=max(ax1,bx1);
        int cx2=min(ax2,bx2);
        int cy1=max(ay1,by1);
        int cy2=min(ay2,by2);
        int cl=(cx2-cx1);
        int ch=(cy2-cy1);
        int ca=0;
        if(cl>0 && ch>0)
        {
            ca=cl*ch;
        }
        return (ar1+ar2-ca);
    }
};
