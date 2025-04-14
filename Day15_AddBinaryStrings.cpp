class Solution {
    public:
      string addBinary(string& s1, string& s2) {
          // your code here
          int i=s1.size()-1,j=s2.size()-1;
          int carry=0;
          string result;
          
          while(i>=0 || j>=0 ||carry>0){
              int sum=carry;
              if(i>=0) sum+=s1[i--]-'0';
              if(j>=0) sum+=s2[j--]-'0';
              result.push_back((sum%2)+'0');
              carry=sum/2;
          }
          reverse(result.begin(),result.end());
          size_t first_non_zero=result.find_first_not_of('0');
          return (first_non_zero != string::npos)? result.substr(first_non_zero):"0";
      }
  };