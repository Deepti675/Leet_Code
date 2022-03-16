//https://leetcode.com/problems/validate-stack-sequences/
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
       stack<int>s;
        //take two pointer
        int i=0;
        int n=popped.size();
        for(auto it: pushed)
        {
            s.push(it);
            while(!s.empty()&&s.top()==popped[i])
            {
                s.pop();
                i++;
            }
        }
        return (i==n);
    }
};
