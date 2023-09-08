class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
        int q=0;
        map<int,int>m;
        for(auto i:nums)
           m[i]++;
        int maxi=0;
        for(auto i:m)
            maxi=max(maxi,i.second);
        for(int i=0;i<maxi;i++){
            vector<int>a;
            for(auto &it:m){
                if(it.second>0){
                    q=1;
                    a.push_back(it.first);
                    it.second--;
                }
            }
            if(q==0)
                return ans;
            else{
                ans.push_back(a);
            }
        }
      
        return ans;
    }
};