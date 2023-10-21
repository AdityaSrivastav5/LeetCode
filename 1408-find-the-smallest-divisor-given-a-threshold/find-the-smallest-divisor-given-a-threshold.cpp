class Solution {
public:
    long long check(vector<int>& nums, int divisor){
        long long sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=ceil((double)nums[i]/divisor);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1,high = *max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid = low + (high - low)/2;
            if(check(nums,mid)>threshold) low = mid+1;
            else high = mid-1;
        }
        return low;
    }
};