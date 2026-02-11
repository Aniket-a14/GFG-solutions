class Solution {
  public:
    
    bool isLeaf(Node* node) {
        return node && !node->left && !node->right;
    }
    
    void addLeftBoundary(Node* root, vector<int>& ans) {
        Node* curr = root->left;
        while(curr) {
            if(!isLeaf(curr)) ans.push_back(curr->data);
            
            if(curr->left) curr = curr->left;
            else curr = curr->right;
        }
    }
    
    void addLeaves(Node* root, vector<int>& ans) {
        if(isLeaf(root)) {
            ans.push_back(root->data);
            return;
        }
        
        if(root->left) addLeaves(root->left, ans);
        if(root->right) addLeaves(root->right, ans);
    }
    
    void addRightBoundary(Node* root, vector<int>& ans) {
        Node* curr = root->right;
        vector<int> temp;
        
        while(curr) {
            if(!isLeaf(curr)) temp.push_back(curr->data);
            
            if(curr->right) curr = curr->right;
            else curr = curr->left;
        }
        
        reverse(temp.begin(), temp.end());
        for(int val : temp) ans.push_back(val);
    }
    
    vector<int> boundaryTraversal(Node *root) {
        vector<int> ans;
        if(!root) return ans;
        
        if(!isLeaf(root)) ans.push_back(root->data);
        
        addLeftBoundary(root, ans);
        addLeaves(root, ans);
        addRightBoundary(root, ans);
        
        return ans;
    }
};
