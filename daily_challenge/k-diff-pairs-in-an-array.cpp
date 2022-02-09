//https://leetcode.com/problems/k-diff-pairs-in-an-array/
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>umap;
        int c=0;
        for(auto &i:nums)
            umap[i]++;
        //if k is 0, then which element FREQUENCY >1 can give 0
        if(k==0){
            for(auto &j:umap)
                if(j.second>1)
                    c++;
        }
              // if k is any other number then ,difference can currentnum+k is present then the pair can               //give k as a resultant
              // a-b = c
              // a= c+b
              // b =c-a
         else{
             for(auto &ki:umap){
                 if(umap.count(ki.first+k))
                     c++;
             }
         }
       return c; 
   }
};
