https://leetcode.com/problems/find-duplicate-file-in-system/
class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string,vector<string>>mpp;
        for(auto path: paths){
            stringstream str(path);
            string dir;
            string file;
            getline(str,dir,' ');
            while(getline(str, file, ' ')){
                //content m abcd mil jayega
                string content = file.substr(file.find('(')+1,file.find(')')-file.find('(')-1);
                string name= dir+'/'+file.substr(0,file.find('('));
                mpp[content].push_back(name);
            }
        }
        vector<vector<string>>v;
        for(auto x:mpp){
            if(x.second.size()>1){
                v.push_back(x.second);
            }
        }
        return v;
    }
};
