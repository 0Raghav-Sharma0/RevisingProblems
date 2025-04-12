class Solution {
    public:
        vector<int> rightSideView(TreeNode* root) {
            if (root == NULL) return {};
            
            vector<int> result;
            queue<TreeNode*> q;
            q.push(root);
    
            while (!q.empty()) {
                int size = q.size();
                TreeNode* node = nullptr;
    
                for (int i = 0; i < size; ++i) {
                    node = q.front();
                    q.pop();
                    
                    if (node->left) q.push(node->left);
                    if (node->right) q.push(node->right);
                }
    
                // node now holds the last node at this level
                result.push_back(node->val);
            }
    
            return result;
        }
    };