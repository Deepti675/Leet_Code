class Solution {
    public:
    int divide(int dividend, int divisor) 
    {
        if(dividend == 1<<31 && divisor == -1) return INT_MAX;
        
        bool sign = (dividend>=0) == (divisor >=0) ? true : false;
        
        long dd = abs(dividend);
        long dv = abs(divisor);
        long result=0;
        while(dd - dv >= 0 ){
            int count=0;
            while(dd  - (dv << 1 << count) >= 0 ){
                count++;
            }
            
            result += 1 << count;
            dd -= dv << count ;
        }
        
        return sign?result: -result ;
    }
};
