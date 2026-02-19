class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
        set<int> s;
        vector<int> ans;
        
        for(int i=0;i<arr.size();i++){
            s.insert(arr[i]);
        }
        
        for(int i=low;i<=high;i++){
            if(s.count(i)) continue;
            ans.push_back(i);
        }
        
        return ans;
    }
};