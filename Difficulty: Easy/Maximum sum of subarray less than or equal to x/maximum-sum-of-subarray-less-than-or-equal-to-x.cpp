class Solution {
  public:
    long long findMaxSubarraySum(vector<int>& arr, long long x) {
        // Your code goes here
        long long ans = 0;
        long long sum = 0;
        int left = 0;
        int right = 0;
        
        while(right<arr.size()){
            sum += arr[right];
            
            while(sum>x){
                sum -= arr[left];
                left++;
            }
            
            if(sum<=x){
                ans = max(ans,sum);
            }
            right++;
        }
        
        return ans;
    }
};
