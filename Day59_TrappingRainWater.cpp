class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int N =arr.size();
        vector<int> pref(N,0);
        vector<int> suf(N,0);
        
        pref[0]=arr[0];
        suf[N-1]=arr[N-1];
        
        for(int i=1;i<N;i++)
        {
            pref[i]= max(pref[i-1],arr[i]);
        }
        for(int i=N-2;i>=0;i--)
        {
            suf[i]=max(suf[i+1],arr[i]);
        }
        
        int ans=0;
        
        for(int i=0;i<N;i++)
        {
            ans+=min(pref[i],suf[i])-arr[i];
        }
        return ans;
    }
};