class Solution {
public:
    string reverseWords(string s) {
        int start=0,end=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ')  end++;
            else{
                reverse(s.begin()+start,s.begin()+end);
                end++;
                start=end;
            }
            
        }
        reverse(s.begin()+start,s.begin()+end);
        return s;
    }
};