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
        long long l = 1, h = (long long)cars * (long long)cars * 100;
        long long ans = h;
        while(l <= h){
            long long mid = l + (h - l)/2; 
            if(check(mid, cars, ranks)) { ans = mid; h = mid - 1; }
            else{ l = mid + 1; }
            
        }
        return ans;
    }
};