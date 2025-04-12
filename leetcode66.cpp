/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    public:
        void returning_vector(TreeNode* node, vector<int>& v1){
            if(node == NULL){
                return;
            }
    
            if(node->left == NULL && node->right == NULL){
                v1.push_back(node->val);
                return;  
            }
            returning_vector(node->left, v1);
            returning_vector(node->right, v1);
    
        }
        bool leafSimilar(TreeNode* root1, TreeNode* root2) {
            vector<int>v1;
            vector<int>v2;
            returning_vector(root1 , v1);
            returning_vector(root2 , v2);
            return v1 == v2;
            
        }
    };