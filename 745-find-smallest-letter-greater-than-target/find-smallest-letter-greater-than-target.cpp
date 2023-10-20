class Solution {
public:
    char nextGreatestLetter(vector<char>& v, char &c) {
        int x = upper_bound(v.begin(),v.end(),c)-v.begin();
        if(x == v.size())return v[0];
        return v[x];
    }
};