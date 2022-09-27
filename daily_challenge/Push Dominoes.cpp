https://leetcode.com/problems/push-dominoes/
class Solution {
public:
    string pushDominoes(string dom) {
        int n=dom.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        int t=1;
        char prev='.';
        //filling array for right
        for(int i=0;i<n;i++){
            if(dom[i]=='R'){
                prev='R';
                t=1;
                continue;
            }
            else if(dom[i]=='L')
            {
                prev='L';
            }
            else if(prev=='R' && dom[i]=='.')
            {
                right[i]=t;
                t++;
            }
            
        }
        prev='.';
        t=1;
        for(int i=n-1;i>=0;i--){
            if(dom[i]=='L'){
                prev='L';
                t=1;
                continue;
            }
            else if(dom[i]=='R')
            {
                prev='R';
            }
            else if(prev=='L'  && dom[i]=='.'){
                left[i]=t;
                t++;
            }
        }
        string res="";
        for(int i=0;i<n;i++){
            if(left[i]==0 && right[i]==0)
            {
                res+=dom[i];
            }
            else if(left[i]==0)
            {
                res+='R';
            }
            else if(right[i]==0){
                res+='L';
            }
            else if(left[i]==right[i]){
                res+='.';
            }
            else if(left[i]<right[i]){
                res+='L';
            }
            else{
                res+='R';
            }
        }
        return res;
    }
};
