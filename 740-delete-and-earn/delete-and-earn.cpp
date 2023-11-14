class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        // int i, x = 10001;
       int n = *max_element(nums.begin(),nums.end());
       vector<int>repo(n+1,0);
       for(int i:nums){
           repo[i]+=i;
       }
       int u = nums.size();
       vector<int>dp(n+1,0);
       dp[0]=repo[0];
       dp[1]=repo[1];
       for(int i=2;i<n+1;i++){
           dp[i] = max(repo[i]+dp[i-2],dp[i-1]);
       }
       return dp[n];



        
    }
};