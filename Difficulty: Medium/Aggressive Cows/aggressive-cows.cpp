
// User function Template for C++

class Solution {
  public:

    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        sort(stalls.begin(),stalls.end());
        int left= 1, right = stalls[stalls.size()-1],ans=0;
        right -= stalls[0];
        
        while(left<=right){
            int mid = left + (right-left)/2;
            int count=1,pos=stalls[0];
            for(int i=1;i<stalls.size();i++){
                if(pos+mid<=stalls[i]){
                    count++;
                    pos=stalls[i];
                }
            }
            if(count<k){
                right=mid-1;
            }else{
                ans=mid;
                left=mid+1;
            }
        }
        return ans;
    }
};

