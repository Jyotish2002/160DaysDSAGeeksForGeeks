class Solution {
    public:
      // arr: input array
      // Function to find maximum circular subarray sum.
      int circularSubarraySum(vector<int> &arr) {
  
          // your code here
          int total=0,max_sum=INT_MIN,min_sum=INT_MAX;
          
          int curr_max=0,curr_min=0;
          
          bool neg=true;
          
          for(int num:arr){
              total+=num;
              curr_max=max(num,curr_max+num);
              
              max_sum=max(max_sum,curr_max);
              
              curr_min=min(num,curr_min+num);
              
              min_sum=min(min_sum,curr_min);
              
              if(num>0) 
              {
                  
                  neg=false;
              }
          }
          if(neg) return max_sum;
          return max(max_sum,total-min_sum);
      }
  };