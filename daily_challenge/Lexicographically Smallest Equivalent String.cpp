https://leetcode.com/problems/lexicographically-smallest-equivalent-string/description/
class Solution {
public:
    vector<int>headchar;
    int find(int x)
    {
        if(headchar[x]==-1)return x;
        return headchar[x]=find(headchar[x]);
    }
    void Union(int x,int y)
    {
        int parx=find(x);
        int pary=find(y);
        if(parx==pary)return;
        headchar[max(parx,pary)]=min(parx,pary);
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        headchar.resize(26,-1);
        for(int i=0;i<s1.size();i++)
        {
            Union(s1[i]-'a',s2[i]-'a');
        }
        for(auto i=0;i<baseStr.size();i++)
        {
            baseStr[i]=find(baseStr[i]-'a')+'a';
        }
        return baseStr;
    }
};
