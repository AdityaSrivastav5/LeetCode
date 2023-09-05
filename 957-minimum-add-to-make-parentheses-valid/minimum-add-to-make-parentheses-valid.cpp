class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int ans=0;
        for(char i:s){
            if(i=='(')
                st.push(i);
            else if(i==')' && !st.empty())
                st.pop();
            else if(i==')')
               ans++;
        }
        ans+=st.size();
        return ans;
    }
};