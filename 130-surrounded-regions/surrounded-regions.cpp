class Solution {
private:
    void dfs(int row,int col,vector<vector<char>>& board){
        int n=board.size();
        int m=board[0].size();
         board[row][col]='#';
        int delrow[] = {-1, 0, +1, 0}; 
	    int delcol[] = {0, +1, 0, -1}; 
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && 
            board[nrow][ncol]=='O'){
                dfs(nrow,ncol,board) ;

            }
            
        }
    }
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        if(n==0)return;
        int m=board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<m;i++){
            if(board[0][i]=='O')
                dfs(0,i,board);
            if(board[n-1][i]=='O')
                dfs(n-1,i,board);
        }
        for(int i=0;i<n;i++){
            if(board[i][0]=='O')
                dfs(i,0,board);
            if(board[i][m-1]=='O')
                dfs(i,m-1,board);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O')
                    board[i][j]='X';
                if(board[i][j]=='#')
                    board[i][j]='O';
            }
        }
    }
};