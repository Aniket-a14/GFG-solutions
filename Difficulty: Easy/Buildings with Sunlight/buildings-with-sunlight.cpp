class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
        // code here
        int maxi = -1;
        int ans = 0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=maxi){
                ans++;
            }
            maxi=max(maxi,arr[i]);
        }
        
        return ans;
    }
};