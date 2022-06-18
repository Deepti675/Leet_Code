class WordFilter {
public:
    WordFilter(vector<string>& words) {
     
        int k=0;
        for(auto it: words){
        int n= it.length();
        vector<string>pre(n+1,"");
        vector<string>suff(n+1,"");
        for(int i=0;i<n;i++)
        {
            pre[i+1]=pre[i]+it[i];
            suff[i+1]=it[n-i-1]+suff[i];
        }
            for(auto p:pre)
                for(auto s:suff)
                   fil[p+"_"+s]= k;
            k++;        
        }
    }
    
    int f(string prefix, string suffix) {
        string key=prefix+"_"+suffix;
        auto it=fil.find(key);
        if(it!=fil.end())
            return it->second;
        return -1;
    }
    private: 
    unordered_map<string,int>fil;
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */
