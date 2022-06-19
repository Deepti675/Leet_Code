//lower bound method best time complexity
class Solution {
public:
    
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL);
        
        vector<string>temp;
        vector<vector<string>>res;
        string s="";
        sort(products.begin(),products.end());
        for(auto it: searchWord)
        {
            s+=it;
            temp.clear();
            auto itr=lower_bound(products.begin(),products.end(),s);
            auto curr=products.begin();
            for(int i=0;i<3&&itr+i!=products.end();i++)
            {
                string j=*(itr+i);
                if(j.find(s))break;
                temp.push_back(j);
            }
            
            res.push_back(temp);
        }
        return res;
    }
};

//sorting method
class Solution {
public:
    
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL);
        
        vector<string>temp;
        vector<vector<string>>res;
        string s="";
        sort(products.begin(),products.end());
        for(auto it: searchWord)
        {
            s+=it;
            temp.clear();
            for(auto k:products){
                if(k.substr(0,s.length())==s)
                    temp.push_back(k);
                if(temp.size()==3)
                    break;
                    
            }
            res.push_back(temp);
        }
        return res;
    }
};

//multi set method
class Solution {
public:
    
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL);
        multiset<string>st;
        vector<string>temp;
        vector<vector<string>>res;
        string s="";
        for(auto it:searchWord)
        {
            s+=it;
            st.clear();
            for(auto k:products)
            {
                if(k.substr(0,s.length())==s)
                    st.insert(k);
            }
            temp.clear();
            for(int i=0;i<3 && !st.empty();i++)
            {
                temp.push_back(*st.begin());
                st.erase(st.begin());
            }
            res.push_back(temp);
        }
        return res;
    }
};
