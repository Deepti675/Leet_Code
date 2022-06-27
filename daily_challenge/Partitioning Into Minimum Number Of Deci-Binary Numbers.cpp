//https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
class Solution {
public:
    int minPartitions(string n) {
        int l=n.length();
        int maxi=0;
        for(auto i:n)
        {
            int n1=i-'0';
            maxi=max(n1,maxi);
        }
        return maxi;
    }
};
