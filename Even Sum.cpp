//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int findMin(int A[], int n)
    {
        int s=0;
      int lo=0;
      for(int i=0;i<n;i++){
         s+=A[i]; 
         lo+=(A[i]%2);
         
      }
      int count=0;
      if(s%2==0)return 0;
      if(lo==n)return -1;
      int mini=INT_MAX;
      for(int i=0;i<n;i++){
          if(A[i]%2==0){
              int poo=0;
              int temp=A[i];
              while(temp>1){
                  poo++;
                  temp=temp/2;
                  if(temp%2==1){
                      mini=min(mini,poo);
                      break;
                  }
              }
              
          }
      }
      return mini;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];

        for (int i = 0; i < N; i++) cin >> A[i];
       

        Solution ob;
        cout << ob.findMin(A, N) << "\n";
    }
    return 0;
}

// } Driver Code Ends
