class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> a; 
        for(char c : s){
            if(c=='('){
                a.push(0);
            } else if(c==')'){
                if(a.top() ==0){ 
                    a.pop();
                    a.push(1);
                }else {
                    int x=0;
                    while(a.top() != 0){ 
                        x+=a.top();
                        a.pop();
                    }
                    a.pop();
                    a.push(2*x);
                }
            }
        }
        int x=0;
        while(a.size()>0){
            x+=a.top();
            a.pop();
        }
        return x;
    }
};