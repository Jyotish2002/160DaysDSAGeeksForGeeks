class Solution {
    public:
      int maximumProfit(vector<int> &prices) {
          // code here
          int current = prices[0], diff,res=0;
          int n=prices.size();
          for(int i=1;i<n;i++){
              if(current>prices[i]){
                  current = prices[i];
              }
              else{
                  diff=prices[i]-current;
                  res=max(res,diff);
              }
          }
          return res;
      }
  };
  