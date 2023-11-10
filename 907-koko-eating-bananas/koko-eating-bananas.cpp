class Solution {
public:
    long long fun(vector<int>& piles,int mid){
        long long total_hrs = 0;
        for(int i=0;i<piles.size();i++){
            total_hrs += ceil((double)piles[i]/mid);
        }
        return total_hrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
       int high = *max_element(piles.begin(),piles.end());
       cout<<high;
       int low=1;
       while(low<=high){
           int mid = low + (high-low)/2;
           long long total_hrs = fun(piles,mid);
           if(total_hrs<=h && total_hrs>0)
              high = mid - 1;
           else
               low = mid + 1;
       }
       
       return low;
    }
};