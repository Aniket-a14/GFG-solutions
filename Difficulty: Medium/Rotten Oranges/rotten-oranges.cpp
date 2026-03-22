class Solution {
public:
    int orangesRot(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        queue<pair<int,int>> q;
        int fresh = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j] == 2){
                    q.push({i,j});
                }
                else if(mat[i][j] == 1){
                    fresh++;
                }
            }
        }
        
        int time = 0;
        vector<pair<int,int>> dir = {{-1,0},{1,0},{0,-1},{0,1}};
        
        while(!q.empty() && fresh > 0){
            int s = q.size();
            bool rotted = false;
            
            for(int i=0;i<s;i++){
                auto [x,y] = q.front(); q.pop();
                
                for(auto [dx,dy] : dir){
                    int nx = x + dx;
                    int ny = y + dy;
                    
                    if(nx>=0 && nx<n && ny>=0 && ny<m && mat[nx][ny]==1){
                        mat[nx][ny] = 2;
                        q.push({nx,ny});
                        fresh--;
                        rotted = true;
                    }
                }
            }
            
            if(rotted) time++;
        }
        
        return (fresh == 0) ? time : -1;
    }
};