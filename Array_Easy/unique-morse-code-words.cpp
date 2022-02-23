//https://leetcode.com/problems/unique-morse-code-words/
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words){
        vector<string> code {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<char,string>umap;
        for(int i=0;i<26;i++)
        {
           umap['a'+i]=code[i];
        }
        int n=words.size();
        vector<string>m(n,"");
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words[i].size();j++)
            {
            m[i]+=umap[words[i][j]];
                    
            }
        }
        unordered_set<string>set;
        for(auto i: m)
        {
            set.insert(i);
        }
        return set.size();
    }
};
