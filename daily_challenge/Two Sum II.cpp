class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int i=0;
        int j=num.size()-1;
        while(i<j)
        {
            int sum=num[i]+num[j];
            if(sum==target)
            {
                num={i+1,j+1};
                 return num;
            }
            else if(sum>target)
                j-=1;
            else
                i+=1;
        }
        return num;
    }
};
