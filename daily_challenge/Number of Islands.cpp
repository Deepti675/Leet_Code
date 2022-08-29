https://leetcode.com/problems/number-of-islands/
class Solution {
public:
    void bfs(int r, int c, vector<vector<int>>&vis,vector<vector<char>>&grid){
        int n=grid.size();
        int m=grid[0].size();
        vis[r][c]=1;
        queue<pair<int,int>>qu;
        int offsets[]={0,1,0,-1,0};
        qu.push({r,c});
        while(!qu.empty()){
            int row= qu.front().first;
            int col= qu.front().second;
            qu.pop();
            //traverse its neighbour and mark them visited if it land
                    for(int k=0;k<4;k++){
                    int nrow= row + offsets[k];
                    int ncol= col + offsets[k+1];
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m  && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
                        vis[nrow][ncol]=1;
                        qu.push({nrow,ncol});
                    }
                
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]&& grid[i][j]=='1'){
                    count++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return count;
    }
};
