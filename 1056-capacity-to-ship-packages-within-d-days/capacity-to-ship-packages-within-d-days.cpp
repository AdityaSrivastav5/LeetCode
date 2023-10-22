class Solution {
public:
    int check(vector<int>& weights,int mid){
        int sum = 0;
        int days = 1;
        for(int i=0;i<weights.size();i++){
            if (sum + weights[i] > mid) {
               days += 1;
               sum = weights[i];
            }
            else {
                sum += weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int sum=0;
        int high = accumulate(weights.begin(), weights.end(), sum);
        while(low<=high){
            int mid = low + (high - low)/2;
            if(check(weights,mid)>days)
                low = mid+1;
            else 
                {
                high = mid - 1;
                }
        }
        return low;
    }
};