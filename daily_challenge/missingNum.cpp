//Brute approch
class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int c=0;
        int t=nums.size()*(nums.size()+1)/2;
        for(auto n:nums)
        {
            c+=n;
        }
       return t-c;
    }
};
//Bit manipulation
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int c=nums.size();
        int i=0;
        for(int n:nums)
        {
            c^=n;
            c^=i;
            i++;
        }
        return c;
    }
};

//one line approch
//accumulate(): This function returns the sum of all the values lying in a range between [first, last)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       return nums.size()*(nums.size()+1)/2-accumulate(nums.begin(),nums.end(),0);
    }
};
