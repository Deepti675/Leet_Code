https://leetcode.com/problems/binary-trees-with-factors/
class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        map<int,long long int>mpp;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            mpp.insert({arr[i],1});
        }
        for(int i=1;i<arr.size();i++){
            long long int count=0;
            auto it3=mpp.find(arr[i]);
            for(int j=0;j<i;j++){
                if(arr[i]%arr[j]==0){
                    auto it=mpp.find(arr[i]/arr[j]);
                    auto it2=mpp.find(arr[j]);
                    if(it!=mpp.end())
                    {
                        count+=(it->second)*(it2->second);
                    }
                }
            }
            it3->second+=count;
        }
        long long int sum=0;
        for(auto i=mpp.begin();i!=mpp.end();i++){
            sum+=i->second;
        }
       return sum%1000000007; 
    }
};
