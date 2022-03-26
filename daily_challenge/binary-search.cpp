//https://leetcode.com/problems/binary-search/
class Solution {
public:
    int search(vector<int>& a, int target) {
        int end=a.size()-1;
        int start=0;
        int mid;
        while(end>=start)
        {
            mid=start+(end-start)/2;
            if(a[mid]==target)
            {
                return mid;
            }
            else if(a[mid]>target)
            {
                end=mid-1;
            }
            else if(a[mid]<target)
            {
                start=mid+1;
            }
        }
        return -1;
    }
};
