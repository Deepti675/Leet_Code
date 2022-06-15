class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>vv(n,vector<int>(n));
        
       int rs=0,re=n-1;
        int cs=0,ce=n-1;
        int v=1;
        while(rs<=re&&cs<=ce)
        {
        //moving left to right 
            for(int i=cs;i<=ce;i++)
                vv[rs][i]=v++;
            rs++;
            //moving down
            for(int i=rs;i<=re;i++)
                vv[i][ce]=v++;
            ce--;
            //move right to left
            //move up
            if(cs<=ce){
                //moving right to left
                for(int i=ce;i>=cs;i--)
                    vv[re][i]=v++;
                 re--;
            }
               
                //moving up
            if(rs<=re)
            {
                for(int i=re;i>=rs;i--)
                    vv[i][cs]=v++;
                cs++;
            }
            
        }
        return vv;
        
    }
};
