https://leetcode.com/problems/reverse-bits/
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
       uint32_t ans=0;
       for(int i=0;i<32;i++){
           uint32_t lsb=1;
           lsb=n&lsb;
           lsb=lsb<<(31-i);
           
           ans=ans|lsb;
           n=n>>1;
       } 
        return ans;
    }
};
