https://leetcode.com/problems/power-of-four/
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0)
            return 0;
        while(n!=1)
        {
            if(n%4!=0)
                return false;
            n=n/4;
        }
        return true;
    }
};
