https://leetcode.com/problems/numbers-with-same-consecutive-differences/
class Solution {
public:
    
    vector<int>ans;
    void f(int len,int &k,int num,int digit){
        if(len==0){
            ans.push_back(num);
            return;
        }
        for(int i=0;i<10;i++){
            if(abs(i-digit)==k)
                f(len-1,k,num*10+i,i);
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        for(int i=1;i<=9;i++){
            f(n-1,k,i,i);
        }
        return ans;
    }
};
