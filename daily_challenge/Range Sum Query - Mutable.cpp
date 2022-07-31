https://leetcode.com/problems/range-sum-query-mutable/
class NumArray {
public:
    vector<int>a;
    int sum=0;
    NumArray(vector<int>& nums) {
       for(int i=0;i<nums.size();i++){
           a.push_back(nums[i]);
           sum+=nums[i];
       }

    }
    
    void update(int index, int val) {
        sum+=(val-a[index]);
       a[index]=val;
    }
    
    int sumRange(int left, int right) {
        int s=0;
        if(right-left<a.size()/2)
            s=accumulate(a.begin()+left,a.begin()+right+1,0);
        else
            s=sum-accumulate(a.begin(),a.begin()+left,0)-accumulate(a.begin()+right+1,a.end(),0);
        // for(int i=left;i<=right;i++)
        // {
        //     s+=a[i];
        // }
        return s;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
