class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
        unordered_map<int,int>freq;
        vector<int> result;
        
        for(auto i=0;i<arr.size();i++){
            freq[arr[i]]++;
            if(i>=k-1){
                result.push_back(freq.size());
                if(--freq[arr[i-k+1]]==0) freq.erase(arr[i-k+1]);
            }
        }
        return result;
    }
};