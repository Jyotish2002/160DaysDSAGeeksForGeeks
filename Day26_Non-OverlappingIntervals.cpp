class Solution {
    public:
      int minRemoval(vector<vector<int>> &a) {
          // code here
          sort(a.begin(),a.end());
          
          int count=0,prev=a[0][1];
          
          for(int i=1;i<a.size();i++)
          {
              if(a[i][0]<prev)
              {
                  count++;
                  prev=min(a[i][1],prev);
              }
              
              else
              {
                  prev=a[i][1];
              }
          }
          
          return count;
      }
  };