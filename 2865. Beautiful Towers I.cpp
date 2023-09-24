class Solution {
public:
    long long maximumSumOfHeights(vector<int>& h) {
        int n=h.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(h[i]>maxi){
                maxi=h[i];
            }
        }
        long long ans=0;
        for(int j=0;j<n;j++)
        {
            long long sumi=0;
            int pre=maxi;
            //cout<<"pos "<<i<<'\n';
            for(int k=j;k<n;k++)
            {
                if(h[k]>=pre) sumi+=pre;
                else{
                    pre=h[k];
                    sumi+=h[k];
                }
            }
            pre=maxi;
            for(int i=j-1;i>=0;i--)
            {
                if(h[i]>=pre) sumi+=pre;
                else{
                    pre=h[i];
                    sumi+=h[i];
                }
            }
       //     cout<<sum<<'\n';
            ans=max(ans,sumi);
            
        }
        return ans;
    }
};
