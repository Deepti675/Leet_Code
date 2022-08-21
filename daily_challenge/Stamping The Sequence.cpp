https://leetcode.com/problems/stamping-the-sequence/
class Solution {
public:
    bool match(string &a,string &b){
        if(a.length() != b.length()) 
            return false;
        for(int i=0;i<a.length();i++)
            if(a.at(i) != b.at(i) && a.at(i) != '?' && b.at(i) != '?') 
                return false;
        return true;
    }
    bool allwild(string &s){
        for(int i=0;i<s.length();i++)
            if(s.at(i) != '?') 
                return false;
        return true;
    }
    vector<int> movesToStamp(string stamp, string target) {
        vector<int>vis;
        int n=target.size();
        int m=stamp.size();
        bool f=true;
        string str;
        while(f){
            f=false;
            for(int i=0;i<n-m+1;i++){
                str=target.substr(i,m);
                if(allwild(str))continue;
                if(match(stamp,str)){
                    f=true;
                    vis.push_back(i);
                    for(int j=0;j<m;j++)target[i+j]='?';
                }
            }
        }
        if(!allwild(target))vis.clear();
        if(vis.size()>10*n)vis.clear();
        reverse(vis.begin(),vis.end());
        return vis;
    }
};
