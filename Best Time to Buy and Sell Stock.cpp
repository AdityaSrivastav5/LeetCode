class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<prices.size();i++){
            int mini=min(mini,prices[i]);
            int maxi=max(maxi,prices[i]-mini);
        }
        return maxi;
    }
};
