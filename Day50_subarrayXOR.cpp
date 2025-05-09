class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        long result=0,pref=0;
        unordered_map<int,int>map;
        for(int val: arr){
            pref ^=val;
            result+=map[pref ^ k]+(pref==k);
            map[pref]++;
        }
        return result;
    }
};