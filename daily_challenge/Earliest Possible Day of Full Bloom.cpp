https://leetcode.com/problems/earliest-possible-day-of-full-bloom/
class Solution {
public:
    //sorting on the basis of growing time function
    static bool comp(pair<int,int>p1,pair<int,int>p2)
    {
        return p1.second>p2.second;
    }
    
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int res=0;
        int str=0;
        //vector of pair planing time and grow time
        vector<pair<int,int>>v;
        for(int i=0;i<growTime.size();i++)
        {
            v.push_back({plantTime[i],growTime[i]});
        }
        sort(v.begin(),v.end(),comp);
        for(int i=0;i<growTime.size();i++)
        {
            str+=v[i].first;
            res=max(res,str+v[i].second);
        }
        return res;
        
    }
};
