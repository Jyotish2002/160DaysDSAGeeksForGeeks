class Solution {
    public:
    int mergeAndCount(vector<int>& arr,int start,int mid,int end){
        vector<int> merged;
        int left=start;
        int right=mid+1;
        int inversions=0;
        
        while(left<=mid && right<=end){
            if(arr[left]<=arr[right]){
                merged.push_back(arr[left++]);
            }
            else{
                merged.push_back(arr[right++]);
                inversions+=(mid-left+1);
            }
        }
        while(left<=mid) merged.push_back(arr[left++]);
        while(right<=end) merged.push_back(arr[right++]);
        
        for(int i=0;i<merged.size();++i){
            arr[start+i]=merged[i];
        }
        return inversions;
    }
    int mergeSortAndCount(vector<int>& arr,int start,int end){
        if(start>=end) return 0;
        
        int mid=start+(end-start)/2;
        int inversions=0;
        inversions+=mergeSortAndCount(arr,start,mid);
        inversions+=mergeSortAndCount(arr,mid+1,end);
        inversions +=mergeAndCount(arr,start,mid,end);
        return inversions;
    }
      // Function to count inversions in the array.
      int inversionCount(vector<int> &arr) {
          // Your Code Here
          return mergeSortAndCount(arr,0,arr.size()-1);
      }
  };