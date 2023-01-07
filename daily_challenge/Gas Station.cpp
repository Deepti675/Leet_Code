https://leetcode.com/problems/gas-station/description/
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tot_fule=0;
        int tot_cost=0;
        for(int i=0;i<gas.size();i++)
        {
            tot_fule+=gas[i];
        }
        for(int i=0;i<gas.size();i++)
        {
            tot_cost+=cost[i];
        }
        if(tot_fule<tot_cost)
        return -1;
        int start=0,current=0;
        for(int i=0;i<gas.size();i++)
        {
            current+=(gas[i]-cost[i]);
            if(current<0)
            {
                start=i+1;
                current=0;
            }
        }
    return start;
    }
};
