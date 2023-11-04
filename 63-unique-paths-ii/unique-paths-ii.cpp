class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& a) {
        int n= a.size();
        int m = a[0].size();
        if(n==0) return 0;
        if(a[0][0]) return 0;
        vector<int>prev(m,0);
        for(int i=0;i<n;i++){
            vector<int>cur(m,0);
            for(int j=0;j<m;j++){
                if(i==0 && j==0)cur[j]=1;
                else if(a[i][j]==1) cur[j]=0;
                else{
                    int up=0,left=0;
                    if(i>0) up = prev[j];
                    if(j>0) left = cur[j-1];
                    cur[j]= up +left; 
                }
                
            }           
            prev = cur;
        }
        return prev[m-1];
    }
};