class Solution {
private:
    vector<int> generateRow(int row){
        vector<int>ansrow;
        long long ans=1;
        ansrow.push_back(ans);
        for(int i=1;i<row;i++){
            ans*=(row-i);
            ans/=i;
            ansrow.push_back(ans);

        }
        return ansrow;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};
