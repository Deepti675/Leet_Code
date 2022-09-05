https://leetcode.com/problems/reverse-integer/
class Solution {
public:
    int reverse(int x) {
        long rem,rev_num=0;
        bool f=0;
         if(x<0){
              f=1;
          }
        x=abs(x);
      while(x>0){
           if((10*rev_num+x%10)>INT_MAX || (10*rev_num+x%10)<INT_MIN)
               return 0;
           rem= x%10;
           rev_num= rev_num*10+rem;
          
          x/=10;
          
      } 
        return f?(0-rev_num):(rev_num);
    }
};
