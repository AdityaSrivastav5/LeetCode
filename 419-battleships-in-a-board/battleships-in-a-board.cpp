class Solution {
private:
    void dfs(int row,int col,int n,int m,vector<vector<char>>& board,vector<vector<int>>&vis){
        if(row<0 || col<0 || row>=n || col>=m || board[row][col]=='.' || vis[row][col]==1) return;
        vis[row][col]=1;
        dfs(row-1,col,n,m,board,vis);
        dfs(row+1,col,n,m,board,vis);
        dfs(row,col-1,n,m,board,vis);
        dfs(row,col+1,n,m,board,vis);
    }
public:
    int countBattleships(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='X' && vis[i][j]==0){
                    count++;
                    dfs(i,j,n,m,board,vis);
                }
            }
        }
        return count;
    }
};