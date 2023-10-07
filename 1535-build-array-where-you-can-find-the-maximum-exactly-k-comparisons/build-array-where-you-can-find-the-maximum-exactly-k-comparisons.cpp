class Solution {
public:
    int mod = 1e9+7;
    vector<vector<vector<int>>>dp;
    int solve(int prevMax,int n,int m,int k){
        if(n <= 0){
            if(k == 0){
                return 1;
            }
            return 0;
        }
        if(dp[prevMax][n][k] != -1){
            return dp[prevMax][n][k];
        }
        long long ans = 0;
        for(int num = 1;num <= m;num++){
            if(num <= prevMax){
                ans += solve(prevMax,n-1,m,k) % mod;
            }
            else{
                if(n > 0 && k > 0){
                    ans+= solve(num,n-1,m,k-1) % mod;
                }
            }
        }
        return dp[prevMax][n][k] = ans % mod;
    }

    int numOfArrays(int n, int m, int k) {
        dp.resize(m+1,vector<vector<int>>(n+1,vector<int>(k+1,-1)));
        return solve(0,n,m,k);
    }
};