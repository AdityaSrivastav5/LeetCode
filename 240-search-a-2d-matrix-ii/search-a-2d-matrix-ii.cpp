class Solution {
public:
    bool binarysearch(int x, vector<int> &a) {
        int l = 0, r = a.size() - 1;
        while(l <= r) {
            int mid = (l + r) / 2;
            if(a[mid] == x) {
                return true;
            }
            else if(a[mid] < x) l = mid + 1;
            else r = mid - 1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0; i<matrix.size(); i++) {
            if(binarysearch(target, matrix[i])) {
                return true;
            }
        }
        return false;
    }
};