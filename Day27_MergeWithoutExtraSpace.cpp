class Solution {
    public:
      void mergeArrays(vector<int>& a, vector<int>& b) {
          // code here
          int i=a.size()-1,j=0;
          while(i>=0 && j<b.size() && a[i]>b[j]){
              swap(a[i--],b[j++]);
          }
          sort(a.begin(),a.end());
          sort(b.begin(),b.end());
          
      }
  };