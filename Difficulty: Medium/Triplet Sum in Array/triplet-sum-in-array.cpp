
class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Your Code Here
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<arr.size()-2;i++){
            int left=i+1;
            int right=arr.size()-1;
            
            while(left<right){
                if(arr[i]+arr[left]+arr[right]==target){
                    return true;
                }else if(arr[i]+arr[left]+arr[right]>target){
                    right--;
                }else{
                    left++;
                }
            }
        }
        return false;
    }
};

