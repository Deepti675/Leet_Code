https://leetcode.com/problems/string-to-integer-atoi/
class Solution {
public:
    int myAtoi(string s) {
         bool p=true;
         int sum=0;
         int i=0;
        
        while(s[i]==' ' &&  i<s.size())i++;
        
        
        if(s[i]=='+'|| s[i]=='-'){
            p = (s[i]=='+') ? true : false;
            i++;
        }
       
        while(s[i]>= '0' && s[i]<= '9' && i<s.size()){
            
              if (sum > INT_MAX / 10 || sum == INT_MAX / 10 && s[i] - '0' > 7) return INT_MAX;
              if (sum < INT_MIN / 10 || sum == INT_MIN / 10 && s[i] - '0' > 8) return INT_MIN; 
            
            sum = p ? 10*sum + (s[i] - '0') : 10*sum - (s[i] - '0');
            i++;
        }       
        
        return (sum);
      
    }
};
