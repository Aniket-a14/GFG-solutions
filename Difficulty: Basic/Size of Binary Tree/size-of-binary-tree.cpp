/*
Definition for Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int ans = 0;
    
    void dfs(Node* root){
        if(!root) return;
        
        ans++;
        
        dfs(root->left);
        dfs(root->right);
    }
    
    int getSize(Node* root) {
        // code here
        dfs(root);
        
        return ans;
    }
};