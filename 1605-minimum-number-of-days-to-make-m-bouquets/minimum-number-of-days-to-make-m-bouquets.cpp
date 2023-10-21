class Solution {
public:
    bool possible(vector<int>& bloomDay,int day,int m,int k){
        int count=0,no_of_B=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day) count++;
            else{
                no_of_B+=count/k;
                count=0;
            }
        }
        no_of_B+=count/k;
        if(no_of_B>=m)return true;
        else return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k>bloomDay.size()) return -1;
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid = low+(high-low)/2;
            if(possible(bloomDay,mid,m,k))
               high = mid-1;
            else
               low = mid+1;
        }
        return low;
    }
};