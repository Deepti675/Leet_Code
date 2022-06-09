class Solution{
public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        //int n1=array.size();
        int sum=n*(n+1)/2;
        int c=0;
        for(auto m:array)
        {
            c+=m;
        }
        return sum-c;
    }
};
