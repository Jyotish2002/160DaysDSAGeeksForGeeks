class Solution {
    public:
      // Function to find maximum product subarray
      int maxProduct(vector<int> &arr) {
          // Your Code Here
          int n=arr.size();
          int Product = arr[0];
          int maxVal=arr[0],minVal=arr[0];
          
          for(int i=1;i<n;i++){
              if(arr[i]<0){
                  swap(maxVal,minVal);
              }
              maxVal=max(arr[i],maxVal*arr[i]);
              minVal=min(arr[i],minVal*arr[i]);
              
              Product=max(Product,maxVal);
          }
          return Product;
      }
  };