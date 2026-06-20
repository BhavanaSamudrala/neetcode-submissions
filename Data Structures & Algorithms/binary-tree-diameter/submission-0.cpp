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

    public: int dfs(TreeNode* root, int *result){
        if (!root) return 0;
            
        int left_height =  dfs(root->left, result);
        int right_height =  dfs(root->right, result);

        int diameter = left_height + right_height; 
        *result = max(*result, diameter); 
        int height = 1 + max(left_height, right_height);

        return height; 
    }
    
    public: int diameterOfBinaryTree(TreeNode* root) {
        int result = 0;

        int h = dfs(root, &result); 
        
        return result; 
        
    }
};
