// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int s=arr.size();
        int index=0;
        
        for(int i=0;i<s;i++){
            if(arr[i]!=0){
                arr[index]=arr[i];
                index++;
            }
        }
        
        while(index<s){
            arr[index]=0;
            index++;
        }
    }
};
