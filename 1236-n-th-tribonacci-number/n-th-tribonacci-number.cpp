class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        int prev=0,prev1=1,prev2=1;
        for(int i=3;i<=n;i++){
            int curr = prev + prev1 + prev2;
            prev = prev1;
            prev1 = prev2;
            prev2 = curr;
            
        }
        return prev2;
    }
};