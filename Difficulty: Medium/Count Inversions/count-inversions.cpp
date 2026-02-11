class Solution {
  public:
    int merge(vector<int>& nums, int i,int mid, int j){
        vector<int> merged;
        int start = i, end = mid+1;
        
        int inversion=0;
        while(start<=mid && end<=j){
            if(nums[start]<=nums[end]){
                merged.push_back(nums[start]);
                start++;
            }else{
                inversion+= mid-start+1;
                merged.push_back(nums[end]);
                end++;
            }
        }
        
        while(start<=mid) merged.push_back(nums[start++]);
        while(end<=j) merged.push_back(nums[end++]);
        
        for(int l=i;l<=j;l++){
            nums[l] = merged[l-i];
        }
        
        return inversion;
    }
    int count(vector<int>& nums, int i, int j){
        if(i>=j) return 0;
        
        int mid = (i+j)/2;
        
        int inversion = 0; 
        inversion += count(nums,i,mid);
        inversion += count(nums,mid+1,j);
        
        inversion += merge(nums,i,mid,j);
        
        return inversion;
    }
    int inversionCount(vector<int> &arr) {
        // Code Here
        return count(arr,0,arr.size()-1);
    }
};