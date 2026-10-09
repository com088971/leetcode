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
    bool symtry(TreeNode* left,TreeNode* right){
             if(left==NULL && right==NULL) return true;
             if(left==NULL || right==NULL) return false;
             if(left->val!=right->val) return false;
             return symtry(left->left, right->right) &&symtry(left->right, right->left);
     }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL ) return true;
        symtry(root->left,root->right);
        return symtry(root->left,root->right);
    }
};