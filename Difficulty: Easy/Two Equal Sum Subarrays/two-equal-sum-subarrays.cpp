class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        vector<int> pre(arr.size(),0);
        pre[0] = arr[0];
        
        for(int i=1;i<arr.size();i++){
            pre[i] = arr[i]+pre[i-1];
        }
        
        int total = pre[pre.size()-1];
        for(int i=0;i<arr.size();i++){
            if(pre[i]==total-pre[i]) return true;
        }
        
        return false;
    }
};
