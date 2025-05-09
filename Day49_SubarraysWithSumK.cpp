class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int> Sumcount={{0,1}};
        int sum =0,count=0;
        
        for(int num: arr){
            sum+=num;
            count+=Sumcount[sum-k];
            Sumcount[sum]++;
        }
        return count;
    }
};