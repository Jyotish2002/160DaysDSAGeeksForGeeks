class Solution {
    public:
      vector<int> search(string& pat, string& txt) {
          // code here
          vector<int> arr(pat.size(),0);
          int i=0;
          int j=1;
          while(j<pat.size()){
              while(i>0 and pat[i]!=pat[j]){
                  i=arr[i-1];
              }
              
              if(pat[i]==pat[j]){
                  arr[j]=i+1;
                  i++;
              }
              else
              arr[j]=0;
              j++;
          }
          
          j=0;
          i=0;
          vector<int> ans;
          while(i<txt.size()){
              if(txt[i]==pat[j]){
                  i++;
                  j++;
              }
              if(j==pat.size()){
                  ans.push_back(i-j);
                  j=arr[j-1];
              }
              else if(i<txt.size() && txt[i]!=pat[j]){
                  if(j==0)
                  i++;
                  else
                  j=arr[j-1];
              }
          }
          return ans;
      }
  };