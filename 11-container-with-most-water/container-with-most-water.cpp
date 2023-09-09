class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int left=0,right=height.size()-1;
        while(left<=right){
            if(height[left]<height[right]){
                int a=height[left]*(right-left);
                ans=max(ans,a);
                left++;
            }
            else{
                int a=height[right]*(right-left);
                ans=max(ans,a);
                right--;
            }
        }
        return ans;
    }
};