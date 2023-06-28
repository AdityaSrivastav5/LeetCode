class Solution {
public:
    
    int findPeakElement(vector<int>& nums) {
        int s=0,e=nums.size()-1; 
        int mid=s+(e-s)/2; 
        while(s<e){
            if(mid==0){
                if(nums[0]>nums[1]){
                    return mid ; 
                }
                s=mid+1; 
            }
            else if(mid==nums.size()-1){
                if(nums[nums.size()-1]>nums[nums.size()-2]){
                    return mid ; 
                }
                e=mid-1; 
            }
            else if(nums[mid]>nums[mid+1] and nums[mid]>nums[mid-1]){
                return mid; 
            }
            else if(nums[mid]>nums[mid+1]){
                e=mid-1; 
            }
            else {
                s=mid+1; 
            }
            mid=s+(e-s)/2; 
        }
        return s ; 
    }
};
