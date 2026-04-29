class Solution {
  public:
    int minSwaps(vector<int>& arr) {
        // code here
        int k = 0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1) k++;
        }
        
        if(k==0) return -1;
        
        int zero = 0;
        int ans = INT_MAX;
        
        int i=0,j=0;
        
        while(j<arr.size()){
            if(arr[j]==0) zero++;
            
            while(j-i+1>k){
                if(arr[i]==0) zero--;
                
                i++;
            }
            if (j - i + 1 == k) {
                ans = min(ans, zero);
            }
            j++;
        }
        
        return ans;
    }
};