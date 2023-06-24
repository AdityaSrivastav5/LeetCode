class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      int a=matrix[0].size();
      int b=matrix.size();
      for(int i=0;i<b-1;i++){
          for(int j=i+1;j<b;j++){
              swap(matrix[i][j],matrix[j][i]);
          }
      }
      for(int i=0;i<b;i++){
          reverse(matrix[i].begin(),matrix[i].end());
      }
      for(int i=0;i<b;i++){
          for(int j=0;j<b;j++){
              cout<<matrix[i][j];
          }
      }
    }
};
