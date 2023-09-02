class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        stack<int>s;
        int tin=0;
        for(int i=1;i<=n && tin<target.size();i++){
            s.push(i);
            ans.push_back("Push");
            if(s.top()==target[tin])
                tin++;
            else{
                s.pop();
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};
