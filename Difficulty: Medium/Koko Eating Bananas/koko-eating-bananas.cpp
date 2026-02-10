class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        sort(arr.begin(),arr.end());
        long long low = 1;
        long long high= *max_element(arr.begin(),arr.end());
        long long ans = 0;
        
        while(low<=high){
            long long mid = low + (high-low)/2;
            long long count = 0;
            
            for(int i=0;i<arr.size();i++){
                count += (arr[i]+mid-1)/mid;
            }
            if(count<=k){
                ans=mid;
                high = mid-1;
            }else{
                low = mid + 1;
            }
        }
        
        return ans;
    }
};