class Solution {
    public:
      char nonRepeatingChar(string &s) {
          // Your code here
          int n[26]={0};
          for(char c:s){
              n[c-'a']++;
          }
          for(char c:s){
              if(n[c-'a']==1){
                  return c;
              }
          }
          return '$';
      }
  };