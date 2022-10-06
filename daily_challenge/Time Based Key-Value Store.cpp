https://leetcode.com/problems/time-based-key-value-store/
class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>>um;
    TimeMap() {
        
    }
    
    void set(string key, string val, int tim) {
        um[key].push_back({tim,val});
    }
    
    string get(string key, int time) {
        string res;
        if(um.find(key)==um.end())
            return "";
        int s=0;
        int e=um[key].size()-1;
        if(um[key][0].first>time)
            return "";
        //binary search in map
        while(s<=e){
            int mid=s+(e-s)/2;
            if(um[key][mid].first==time)
                return um[key][mid].second;
            else if(um[key][mid].first<time)
            {
                res=um[key][mid].second;
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return res;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
