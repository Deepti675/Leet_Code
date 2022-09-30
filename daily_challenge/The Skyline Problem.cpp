https://leetcode.com/problems/the-skyline-problem/
class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buil) {
        priority_queue<pair<int,int>>pq;
        vector<int>v;
        for(auto b:buil ){
            v.push_back(b[0]);
            v.push_back(b[1]);
        }
        sort(v.begin(),v.end());
        int m=unique(v.begin(),v.end())-v.begin();
        int j=0;
        int pre_h=0;
        vector<vector<int>>res;
        for(int i=0;i<m;i++){
            while(j<buil.size() && buil[j][0]<=v[i]){
                pq.push(make_pair(buil[j][2],buil[j][1]));
                j++;
            }
            while(!pq.empty() && pq.top().second<=v[i])
                pq.pop();
            int now_h=pq.empty()?0:pq.top().first;
            if(now_h!=pre_h){
                res.push_back({v[i],now_h});
                pre_h=now_h;
                
            }
        }
        return res;
    }
};
