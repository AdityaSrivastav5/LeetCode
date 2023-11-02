class Solution {
public:
    bool check(long long time, int cars, vector<int>& ranks){
        int i = 0;
        while(i < ranks.size() && cars > 0){
            int t = sqrt(time /ranks[i]);
            cars -= t; 
            i++;
        }
        if(cars>0)return false;
        return true;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        long long low = 1, high = (long long)cars * (long long)cars * 100;
        while(low <= high){
            long long mid = low + (high - low)/2; 
            if(check(mid, cars, ranks))
                high = mid - 1;
            else
                low = mid + 1; 
            
        }
        return low;
    }
};