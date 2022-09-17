
class Solution {
public:
    bool check_palindrome(string s){
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    vector<vector<int>> palindromePairs(vector<string>& words) {
        vector<vector<int>> ans;
        unordered_map<string,int> mp; // mapping of strings --> indices
        for(int i=0;i<words.size();i++){
            string temp=words[i];
            reverse(temp.begin(),temp.end()); // store reverse of the string
            mp[temp]=i;
        }
        // Edge Case:-  When empty String found
        if(mp.count("")){
            for(int i=0;i<words.size();i++){
                if(!words[i].empty() and check_palindrome(words[i])){
                    ans.push_back({i,mp[""]});
                }
            }
        }
        
        for(int i=0;i<words.size();i++){
            string left,right;
            for(int j=0;j<words[i].length();j++){
                left.push_back(words[i][j]);
                right=words[i].substr(j+1);
                if(mp.count(left) and i!=mp[left] and check_palindrome(right))
                    ans.push_back({i,mp[left]});
                if(mp.count(right) and i!=mp[right] and check_palindrome(left))
                    ans.push_back({mp[right],i});
            }
        }
        return ans;
    }
};
