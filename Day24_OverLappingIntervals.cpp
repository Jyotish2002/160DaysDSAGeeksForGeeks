class Solution {
    public:
      vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
          // Code here
          if(arr.empty())
          return {};
          
          sort(arr.begin(),arr.end());
          
          vector<vector<int>> merged;
          merged.push_back(arr[0]);
          
          for(int i=0;i<arr.size();i++){
              auto& last=merged.back();
              
              if(arr[i][0]<=last[1]){
                  last[1]=max(last[1],arr[i][1]);
              }
              else{
                  merged.push_back(arr[i]);
              }
          }
          return merged;
      }
  };