https://leetcode.com/problems/maximum-performance-of-a-team/
class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& eff, int k) {
        int mode= 1e9+7;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({eff[i],speed[i]});
        }
        sort(v.rbegin(),v.rend());
        priority_queue<int,vector<int>,greater<int>>pq;
        long ans=INT_MIN,sum=0;
        for(int i=0;i<n;i++)
        {
            int effi=v[i].first;
            int spee=v[i].second;
            sum+=spee;
            pq.push(spee);
            if(pq.size()>k)
            {
                sum-=pq.top();
                pq.pop();
            }
            ans=max(ans,sum*effi);
        }
        return ans%mode;
    }
};
