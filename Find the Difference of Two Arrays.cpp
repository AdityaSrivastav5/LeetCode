class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1;
        set<int>s2;
        vector<vector<int>> ans;
        vector<int>a;
        vector<int>b;
        for(auto i:nums1)
            s1.insert(i);
        for(auto i:nums2)
            s2.insert(i);
        for(auto i:s1){
            if(s2.find(i)!=s2.end())
                continue;
            else 
                a.push_back(i);    
        }
        ans.push_back(a);
        for(auto i:s2){
            if(s1.find(i)!=s1.end())
                continue;
            else 
                b.push_back(i);    
        }
        ans.push_back(b);
        return ans;
        
    }
};
