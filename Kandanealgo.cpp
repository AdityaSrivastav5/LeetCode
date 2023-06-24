class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max1=INT_MIN,max2=0;
        for(int i=0;i<nums.size();i++){
            max2=max2+nums[i];
            if(max1<max2)
               max1=max2;
            if(max2<0)
               max2=0;
        }
        return max1;
    }
};
