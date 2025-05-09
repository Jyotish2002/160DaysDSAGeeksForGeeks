class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        unordered_set<int> st;
        int res=0;
        for(int val:arr)
        st.insert(val);
        for(int val : arr){
            if(st.find(val)!= st.end() && st.find(val-1)==st.end()){
                int cur = val, cnt=0;
                while(st.find(cur)!=st.end()){
                    st.erase(cur);
                    cur++;
                    cnt++;
                }
                res=max(res,cnt);
            }
        }
        return res;
    }
};