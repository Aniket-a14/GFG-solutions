class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        sort(a.begin(),a.end());
        
        int i = 0;
        int j = m-1;
        
        int ans = INT_MAX;
        
        while(j<a.size()){
            while(j-i+1>m){
                i++;
            }
            
            ans = min(ans,a[j]-a[i]);
            j++;
        }
        
        return ans;
    }
};