class Solution {
    public:
      int minChar(string& s) {
          // Write your code here
          int n=s.length();
          string revStr=s;
          reverse(revStr.begin(),revStr.end());
          
          string combined = s + "$" + revStr;
          int m=combined.length();
          
          vector<int> ans(m,0);
          for(int i=1;i<m;i++){
              int j=ans[i-1];
              while(j>0 && combined[i]!=combined[j]){
                  j=ans[j-1];
              }
              if(combined[i]==combined[j]){
                  j++;
              }
              ans[i]=j;
          }
          return n-ans.back();
      }
  };
  