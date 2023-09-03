class Solution {
public:
    int uniquePaths(int m, int n) {
        int N=m+n-2;
        int r=m-1;
        double ans=1;
        for(int i=1;i<=r;i++){
            ans=ans*(N-r+i)/i;   //Ncr which means example= 10c3 then ans=8*9*10/1*2*3 , permutation formula bro yaad kr Ncr wala whi h but derive kiya h humne isme
          //hua ye h ki agr mere pass assume kro 5*2 ki matrix h
          //then kitne row ja sakta hu down side wo hoga 4 which is 5-1 similarly col mai 2 mai se 1 which is 2-1.
          //ab agr isme permutation ka formula lagaye to ho sakta h
        }
        return (int)ans;
    
    }
};
