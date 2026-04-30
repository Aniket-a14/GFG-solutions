class Solution {
  public:
    bool isMaxHeap(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size()/2;i++){
            if((i*2+1<arr.size()) && arr[i]<arr[i*2+1]) return false;
            if((i*2+2<arr.size()) && arr[i]<arr[i*2+2]) return false;
        }
        
        return true;
    }
};
