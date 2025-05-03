class Solution {
    public:
      int kthMissing(vector<int> &arr, int k) {
          // Your code goes here
          int lo=0,li=arr.size();
          while(lo<li){
              int mid = lo + (li-lo)/2;
              if(arr[mid]-(mid+1)<k)
              lo=mid+1;
              else
              li=mid;
          }
          return lo+k;
      }
  };