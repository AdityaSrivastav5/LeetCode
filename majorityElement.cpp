class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        int a=0;
        for(int i:nums){
            m[i]++;
        }
        int maxi=0;
        for(auto i:m){
            if(i.second>maxi){
                maxi=i.second;
                a=i.first;
            }
        }
        return a;
    }
};
