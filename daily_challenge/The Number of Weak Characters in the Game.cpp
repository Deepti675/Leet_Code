https://leetcode.com/problems/the-number-of-weak-characters-in-the-game/
class Solution {
public:
    bool static sor(vector<int>&a, vector<int>&b){
        if(a[0]==b[0])
        {
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& pro) {
        sort(pro.begin(),pro.end(),sor);
        int val=0,maxval=INT_MIN;
        int n=pro.size();
        for(int i=n-1;i>=0;i--){
            if(pro[i][1]<maxval)
            {
                val++;
            }
            if(pro[i][1]>maxval){
                maxval=pro[i][1];
            }
        }
        return val;
    }
};
