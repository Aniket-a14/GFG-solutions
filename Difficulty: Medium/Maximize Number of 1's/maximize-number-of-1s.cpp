class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int left = 0;
        int right = 0;
        int count = 0;
        int ans=0;
        
        
        while(right<arr.size()){
            if(arr[right]==0) count++;
            while(count>k){
                if(arr[left]==0) count--;
                left++;
            }
            ans=max(ans,right-left+1);
            right++;
        }
        
        return ans;
    }
};
