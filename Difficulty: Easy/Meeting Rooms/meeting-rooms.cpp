class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        // Code Here
        map<int,int> mp;
        
        for(int i=0;i<arr.size();i++){
            mp[arr[i][0]]++;
            mp[arr[i][1]]--;
        }
        
        int sum = 0;
        
        for(auto& it: mp){
            sum += it.second;
            if(sum>1) return false;
        }
        
        return true;
    }
};