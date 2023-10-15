class Solution {
public:
    const int mod=1e9+7;
    int dp[501][501];
    int helper(int steps,int len,int arrlen)
    {
        if(len==0 && steps==0)return 1;
        if(len<0 || len==arrlen || steps<0)return 0;
        if(len>steps)return 0;
        if(dp[len][steps]!=-1)return dp[len][steps];
        int ways=0;
        for(int x=-1;x<=1;x++)
        {
            ways=(ways+helper(steps-1,len+x,arrlen))%mod;
        }
        return dp[len][steps]=ways;
    }

    int numWays(int steps, int arrLen) {
        memset(dp,-1,sizeof(dp));
        return helper(steps,0,arrLen);
    }
};