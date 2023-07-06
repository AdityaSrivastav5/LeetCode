class Solution {
private:
    void merge(vector<int>& arr, int start, int mid, int end){
  int m = mid - start + 1;
  int n = end - mid;
  int arr1[m], arr2[n];
  int a=start;
  for (int i = 0; i < m; i++)
     arr1[i] = arr[a++];
  for (int j = 0; j < n; j++)
    arr2[j] = arr[a++];
  int i = 0;
  int j = 0;
  int k = start;
  while (i < m && j < n) {
      if (arr1[i] <= arr2[j]) {
          arr[k++] = arr1[i];
          i++;
      }
      else {
          arr[k++] = arr2[j];
          j++;
      }
  }
  while (i < m) {
     arr[k] = arr1[i];
     i++;
     k++;
  }
  while (j < n) {
     arr[k] = arr2[j];
     j++;
     k++;
  }
}
    void mergeSort(vector<int>& array,int start,int end){
        if(start>=end){
            return;
        }
        int mid =start+ (end-start)/2;
        mergeSort(array,start,mid);
        mergeSort(array,mid+1,end);
        merge(array,start,mid,end);
}
public:
    void sortColors(vector<int>& nums) {
       mergeSort(nums, 0, nums.size()-1); 
    }
};
