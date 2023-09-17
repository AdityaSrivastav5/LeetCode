class Solution {
public:
    int countSetBits(int n)
    {
    if (n == 0)
        return 0;
    else
        return (n & 1) + countSetBits(n >> 1);
     }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int a=countSetBits(i);
            if(a==k){
                count+=nums[i];
            }
        }
        return count;
    }
};