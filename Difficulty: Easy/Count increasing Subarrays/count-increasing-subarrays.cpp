class Solution {
  public:
    int countIncreasing(vector<int>& arr) {
        // code here.
        int len = 1;
        int ans = 0;
        
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]<=arr[i]){
                ans += len*(len-1)/2;
                len=1;
            }else{
                len++;
            }
        }
        
        ans += len*(len-1)/2;
        
        return ans;
        
    }
};
