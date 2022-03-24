//https://leetcode.com/problems/boats-to-save-people/
class Solution {
public:
    int numRescueBoats(vector<int>& p, int l) {
        int c=0;
        sort(p.begin(),p.end());
        int left=0,right=p.size()-1;
        while(left<=right)
        {
            int sum=p[left]+p[right];
            if(sum<=l)
            {
                c++;
                left++;
                right--;
            }
            else{
                c++;
                right--;
            }
        }
        return c;
    }
};
