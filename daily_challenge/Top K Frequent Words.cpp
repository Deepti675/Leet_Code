https://leetcode.com/problems/top-k-frequent-words/
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>freq;
        vector<string>v;
        priority_queue<pair<int,string>> pq;

        for(int i=0;i<words.size();i++)
        {
            freq[words[i]]++;
        }
        for(auto it:freq) pq.push({it.second,it.first});

        for(int i=0;i<freq.size();i++)
        {
        v.push_back(pq.top().second);
        pq.pop();
        }
            for(int i=0;i<v.size();i++){
            for(int j=0;j<v.size()-1;j++){
                if(v[j] > v[j+1] && freq[v[j]] == freq[v[j+1]]) swap(v[j],v[j+1]);
            }
        }
        
        vector<string> res2;
        
        // insert top k frequency words into your answer vector
        for(int j=0;j<k;j++){
            res2.push_back(v[j]);
        }
        
        return res2;
    
    }
};
