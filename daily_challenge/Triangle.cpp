class Solution {
public:
    int minimumTotal(vector<vector<int>>& t) {
        int n=t.size();
        vector<int>temp(n,0);
        
        temp[0]=t[0][0];
        for(int i=1;i<n;i++)
        {
            for(int j=i;j>=0;j--)
            {
                if(j==0)
                    temp[j]=temp[j]+t[i][j];
                else if(j==i)
                    temp[j]=temp[j-1]+t[i][j];
                else
                    temp[j]=min(temp[j],temp[j-1])+t[i][j];
            }
        }
        return *min_element(temp.begin(),temp.end());
    }
};
