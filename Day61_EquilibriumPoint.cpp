class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int totalSum=0;
        for(int num:arr){
            totalSum+=num;
        }
        int leftSum=0;
        for(int i=0;i<arr.size();i++){
            int rightSum=totalSum-leftSum-arr[i];
            if(leftSum==rightSum){
                return i;
            }
            leftSum+=arr[i];
        }
        return -1;
    }
};