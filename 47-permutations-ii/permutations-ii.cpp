class Solution {
public:
void check(int ind,set<vector<int>>&ans,vector<int> &temp,vector<int>& nums){
    if(ind==nums.size()){
        ans.insert(temp);
        return;
    }
    for(int i=ind;i<nums.size();i++){
        swap(temp[i],temp[ind]);
        check(ind+1,ans,temp,nums);
        swap(temp[i],temp[ind]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;
        vector<vector<int>>result;
        vector<int> temp=nums;
        check(0,ans,temp,nums);
        for(auto i:ans){
            result.push_back(i);
        }
        return result;

    }
};