class Solution {
    public:
      int findMin(vector<int>& arr) {
          // complete the function here
          int lo=0,n=arr.size()-1;
          while(lo<n){
              if(arr[lo]<arr[n])
              return arr[lo];
              int mid=lo+((n-lo)>>1);
              if(arr[mid]>arr[n])
              lo=mid+1;
              else
              n=mid;
          }
          return arr[lo];
      }
  };