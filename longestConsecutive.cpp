class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>st;
        if(n==0) return 0;
        int longest=1;
        for(auto i: nums){
            st.insert(i);
        }
        for(auto i:st){
            if(st.find(i-1)==st.end()){
                int cnt=1;
                int x=i;
                while(st.find(x+1)!=st.end()){
                    cnt++;
                    x=x+1;
                }
                longest=max(longest,cnt);
            }
        }
        return longest;
        
    }
};
