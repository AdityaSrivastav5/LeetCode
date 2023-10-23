class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        float ans=log(n)/log(4);
        if(ans-int(ans)>0)return false;
        return true;
    }
};