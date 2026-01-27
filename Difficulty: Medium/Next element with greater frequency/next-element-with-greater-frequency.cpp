class Solution {
  public:
    vector<int> nextFreqGreater(vector<int>& arr) {
         unordered_map<int,int> f;
         for(int i : arr)f[i]++;
         
         stack<int> st;
         vector<int> res(arr.size(),-1);
         
         for(int i=0;i<arr.size();i++){
             while(!st.empty() && f[arr[i]]>f[arr[st.top()]]){
                 res[st.top()]=arr[i];
                 st.pop();
             }
             st.push(i);
         }
         
         return res;
    }
};