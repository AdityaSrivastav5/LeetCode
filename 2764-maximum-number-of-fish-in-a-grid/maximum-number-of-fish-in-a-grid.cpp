class Solution {
private:
   void dfs(int row,int col,vector<vector<int>>& grid,
   vector<vector<int>>&vis,int n,int m,int &sum){
       vis[row][col]=1;
       sum+=grid[row][col];
       int rdir[4] = {-1, 0, 1, 0};
       int cdir[4] = {0, 1, 0, -1};
       for(int i=0;i<4;i++){
           int nrow=row + rdir[i];
           int ncol= col + cdir[i];
           if(nrow>=0 && nrow<n && ncol>=0 && ncol<m 
           && grid[nrow][ncol] && !vis[nrow][ncol]){
               dfs(nrow,ncol,grid,vis,n,m,sum);
           }
       }

   }
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int maxi=0;
        for(int i = 0;i < n ; i++){
            for(int j = 0; j< m ; j++){
                if(grid[i][j]>0 && !vis[i][j]){
                    int sum=0;
                    dfs(i,j,grid,vis,n,m,sum);
                     maxi=max(maxi,sum);
                }  
            }
        }
        return maxi;
    }
};