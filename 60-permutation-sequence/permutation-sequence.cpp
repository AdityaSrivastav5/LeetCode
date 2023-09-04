class Solution {
public:
    string getPermutation(int n, int k) {
        int fact=1;
        vector<int>number;
        for(int i=1;i<n;i++){
            fact*=i;
            number.push_back(i);
        }
        number.push_back(n);
        string s="";
        k--;
        while(true){
            s+=to_string(number[k/fact]);
            number.erase(number.begin()+ k/fact);
            if(!number.size())
                break;
            k=k%fact;
            fact=fact/number.size();
            
        }
        return s;
    }
};