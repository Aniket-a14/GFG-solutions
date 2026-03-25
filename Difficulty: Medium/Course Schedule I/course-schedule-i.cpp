class Solution {
  public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        // Code here
        vector<int> indeg(n,0);
        vector<int> adj[n];
        int ans = 0;
        
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indeg[prerequisites[i][0]]++;
        }
        
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indeg[i]==0) q.push(i);
        }
        
        while(!q.empty()){
            int node = q.front(); q.pop();
            ans++;
            
            for(int i=0;i<adj[node].size();i++){
                indeg[adj[node][i]]--;
                if(indeg[adj[node][i]]==0) q.push(adj[node][i]);
            }
        }
        
        if(ans==n) return true;
        
        return false;
    }
};