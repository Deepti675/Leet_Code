//https://leetcode.com/problems/decode-xored-array/
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
    
        vector<int>arr;
        arr.push_back(first);
        arr.push_back(encoded[0]^first);
        for(int i=1;i<encoded.size();i++){
            arr.push_back(arr[i]^encoded[i]);
        }
        return arr;
    }
};
