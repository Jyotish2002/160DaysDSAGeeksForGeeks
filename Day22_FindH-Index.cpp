class Solution {
    public:
      // Function to find hIndex
      int hIndex(vector<int>& c) {
          // code here
          int n=c.size();
          vector<int> b(n+1,0);
          
          for(int a:c){
              if(a>=n)
              b[n]++;
              else
              b[a]++;
          }
          int cumm=0;
          for(int i=n;i>=0;--i){
              cumm+=b[i];
              if(cumm>=i)
              return i;
          }
          return 0;
      }
  };