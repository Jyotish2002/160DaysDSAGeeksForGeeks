class Solution {
    public:
      void sort012(vector<int>& arr) {
          // code here
          int low=0,mid=0,high=arr.size()-1;
          
          while(mid<=high){
              switch(arr[mid]){
                  
                  case 0:
                  swap(arr[mid++],arr[low++]);
                  break;
                  case 1:
                  mid++;
                  break;
                  case 2:
                  swap(arr[mid],arr[high--]);
                  break;
              }
          }
      }
  };
