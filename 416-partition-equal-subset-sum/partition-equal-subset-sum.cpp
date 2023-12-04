class Solution {
public:
    bool f(int ind,vector<int>& nums,int k,vector<vector<int>>&dp){
        if(k==0) return true;
        if(ind==0) return nums[0]==k;
        if(dp[ind][k]!=-1)return dp[ind][k];
        bool not_take = f(ind-1,nums,k,dp);
        bool take = false;
        if(nums[ind]<=k){
            take = f(ind-1,nums,k-nums[ind],dp);
        }
        return dp[ind][k]= take || not_take;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
	    for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        if(sum%2==1) return false;
        else{
            int k = sum/2;
            vector<vector<int>>dp(n,vector<int>(k+1,-1));
            return f(n-1,nums,k,dp);
        }
    }
};