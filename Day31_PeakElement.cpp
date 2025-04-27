class Solution {
    public:
      int peakElement(vector<int> &arr) {
          // Your code here
          int n=arr.size();
          int lo=0,li=n-1;
          
          while(lo<li){
              int mid = lo+(li-lo)/2;
              if(arr[mid]>arr[mid+1]){
                  li=mid;
              }
              else{
                  lo=mid+1;
              }
          }
          return lo;
      }
  };