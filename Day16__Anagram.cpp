class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        int n1=s1.length(),n2=s2.length();
        if(n1!=n2) return false;
        int count[26]={0};
        for(int i=0;i<n1;i++){
            count[s1[i]-'a']++;
            count[s2[i]-'a']--;
        }
        for(int count1:count){
            if(count1!=0) return false;
        }
        return true;
    }
};