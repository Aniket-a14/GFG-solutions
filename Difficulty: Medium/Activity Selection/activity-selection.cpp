class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
        vector<vector<int>> activity;
        
        for(int i=0;i<start.size();i++){
            activity.push_back({start[i],finish[i]});
        }
        
        sort(activity.begin(), activity.end(),[] (auto & a , auto &b) {
            return a[1] < b[1];
        });
        
        int ans=0;
        int last = -1;
        
        for(int i=0;i<activity.size();i++){
            int start = activity[i][0];
            int end = activity[i][1];
            
            if(start>last){
                ans++;
                last = end;
            }
        }
        
        return ans;
    }
};