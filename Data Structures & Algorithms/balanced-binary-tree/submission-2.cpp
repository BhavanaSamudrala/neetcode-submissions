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

public: int helper(TreeNode* root){
    if (!root) return 0;

    int left_height = helper(root->left); //1
    int right_height = helper(root->right); // 2
 
    if(left_height<0 || right_height<0) return -1;
    if (abs(left_height - right_height) > 1) return -1;

    return 1 + max(left_height, right_height); 

}

public:
    bool isBalanced(TreeNode* root) {
    
        return helper(root) >= 0;


    }
};
