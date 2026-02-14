class Solution {
  public:
    int minMeetingRooms(vector<int> &start, vector<int> &end) {
        // code here
        map<int,int> mp;
        
        for(int i=0;i<start.size();i++){
            mp[start[i]]++;
            mp[end[i]]--;
        }
        
        int sum = 0;
        int ans = 0;
        
        for(auto& it: mp){
            sum += it.second;
            ans = max(ans,sum);
        }
        
        return ans;
    }
};
