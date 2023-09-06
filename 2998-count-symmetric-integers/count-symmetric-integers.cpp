class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans=0;
        for(int i=low;i<=high;i++){
            int a=0;
            int b=0;
            string x= to_string(i);
            if(x.size()%2==0){
                for(int k=0;k<x.size();k++){
                    if(k<(x.size()/2))
                       a+=x[k]-'0';
                    else
                       b+=x[k]-'0';
                }
                if(a==b)
                   ans++;
            }
        }
        return ans;
    }
};