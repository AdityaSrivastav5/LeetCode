class Solution {
public:
    bool isPalindrome(int x) {
        long n=0;
        int res=x;
        if(x<0){
            return 0;
         }
         if(x==0){
             return 1;
         }
        while(x!=0){
            int a=x%10;
            n=(n*10)+a;
            x=x/10;
            
        }
        if(res==n){
            return 1;
            }
        else{
            return 0;
        } 
        
    }
};
