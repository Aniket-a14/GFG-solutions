class Solution {
public:
    bool detectcycle(int node, int parent,
                     vector<vector<int>>& adj,
                     vector<bool>& visited)
    {
        visited[node] = true;

        for (int val : adj[node]) {
            if (!visited[val]) {
                if (detectcycle(val, node, adj, visited))
                    return true;
            }
            else if (val != parent) {
                return true;
            }
        }
        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {

        vector<vector<int>> adj(V);
        vector<bool> visited(V, false);

        for (auto &e : edges) {
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (detectcycle(i, -1, adj, visited))
                    return true;
            }
        }
        return false;
    }
};