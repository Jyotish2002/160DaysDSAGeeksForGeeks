class Solution {
    public:
      int myAtoi(char *s) {
          // Your code here
          int i=0;
          int sign=1;
          long long result=0;
          
          while(s[i]==' '){
              i++;
          }
          if(s[i]=='-'|| s[i]=='+'){
              sign=(s[i]=='-')?-1:1;
              i++;
          }
          
          while(s[i]>='0' && s[i]<='9'){
              result=result*10+(s[i]-'0');
              
              if(sign*result>=INT_MAX) return INT_MAX;
              if(sign*result<=INT_MIN) return INT_MIN;
              i++;
          }
          return sign*result;
      }
  };