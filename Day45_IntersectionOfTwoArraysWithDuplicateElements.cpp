class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int> sa(a.begin(),a.end());
        vector<int> result;
        
        for(int i=0;i<b.size();i++){
            if(sa.find(b[i])!=sa.end()){
                result.push_back(b[i]);
                sa.erase(b[i]);
            }
        }
        return result;
    }
};