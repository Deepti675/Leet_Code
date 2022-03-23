//https://leetcode.com/problems/broken-calculator/
class Solution {
public:
    int brokenCalc(int s, int t) {
        int result=0;
        /*
        Reverse operation approch means converting t to s 
        if t is odd then t is incremented by 1 and if even then t is 
        divided by 2 and both of these consider as one one operation
        */
        while(t>s)
        {
            result++;
            if(t%2==1)
                t=t+1;
            else
                t=t/2;
        }
        int m=(s-t);
        return (result+m);
        
    }
};
