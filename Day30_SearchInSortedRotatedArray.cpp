class Solution {
    public:
      int search(vector<int>& arr, int key) {
          // Code Here
          int n=arr.size();
          for(int i=0;i<n;i++){
              if(arr[i]==key)
              return i;
          }
          return -1;
      }
  };