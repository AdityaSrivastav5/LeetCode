//Problem statement
// We are given an ‘N*M’ matrix. Every cell of the matrix has some chocolates on it, mat[i][j] gives us the number of chocolates. We have two friends ‘Alice’ and ‘Bob’. initially, Alice is standing on the cell(0,0) and Bob is standing on the cell(0, M-1). Both of them can move only to the cells below them in these three directions: to the bottom cell (↓), to the bottom-right cell(↘), or to the bottom-left cell(↙).

// When Alica and Bob visit a cell, they take all the chocolates from that cell with them. It can happen that they visit the same cell, in that case, the chocolates need to be considered only once.

// They cannot go out of the boundary of the given matrix, we need to return the maximum number of chocolates that Bob and Alice can together collect




#include <bits/stdc++.h>
int f(int i , int j1 , int j2 , int r , int c , vector<vector<int>>&grid,vector<vector<vector<int>>> &dp){
    if(j1<0 || j2<0 || j1>=c || j2>=c) return -1e8;
    if(i == r-1){
        if(j1==j2) return grid[i][j1];
        else return grid[i][j1] + grid[i][j2];
    }
    if(dp[i][j1][j2]!=-1)return dp[i][j1][j2];
    //explore all paths 
    int maxi =0;
    for(int k=-1 ; k<=1 ;k++){
        for(int m=-1 ; m<=1 ; m++){
            if(j1 == j2) maxi = max(maxi,grid[i][j1]+f(i+1,j1+k,j2+m,r,c,grid,dp));
            else maxi = max(maxi,grid[i][j1] + grid[i][j2] + f(i+1,j1+k,j2+m,r,c,grid,dp));
        }
    }
    dp[i][j1][j2]= maxi;
    return maxi;
} 
int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    // Write your code here.
    vector<vector<vector<int>>> dp(r, vector<vector<int>>(c, vector<int>(c, -1)));
    return f(0,0,c-1,r,c,grid,dp);

}
