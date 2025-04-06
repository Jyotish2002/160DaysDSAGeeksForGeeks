class Solution {
    public:
      // Function to find the majority elements in the array
      vector<int> findMajority(vector<int>& arr) {
          // Your code goes here.
          int n =arr.size();
          unordered_map<int,int> freq;
          vector<int> ans;
          
          for(auto ele:arr){
              freq[ele]++;
          }
          for(auto it:freq){
              int ele =it.first;
              int cnt = it.second;
              
              if(cnt>n/3){
                  ans.push_back(ele);
              }
          }
          if(ans.size()==2 && ans[0]>ans[1])
          swap(ans[0],ans[1]);
          
          return ans;
          
      }
  };