class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int l=0,e=0,i=0,n=s.size();
        while(i<n){
            while(i<n && s[i]!=' ')
               s[e++]=s[i++];
            if(l<e){
                reverse(s.begin()+l,s.begin()+e);
                if(e==n)break;
                s[e++]=' ';
                l=e;
            }
            ++i;

        }
        if(e>0 && s[e-1]==' ') --e;
        s.resize(e);
        return s;
        
    }
};