class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        int size=nums.size();
        unordered_map<int,int> umap;
        for(int i=0; i<nums.size(); i++){
            if(umap.find(target-nums[i])!=umap.end()){
                ret.push_back(i);
                ret.push_back(umap[target-nums[i]]);
                return ret;
            }
            else{
                umap.insert({nums[i],i});
            }
            
        }
        return ret;
    } 

    
};