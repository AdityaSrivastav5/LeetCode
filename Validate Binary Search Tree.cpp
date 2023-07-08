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
    bool isbst(TreeNode* root,long min,long max) {
        if(root==NULL){
            return true;
        }
        if(root->val>=max || root->val<=min){
            return false;
        }

        else
           return isbst(root->left,min,root->val)&&isbst(root->right,root->val,max);
    }
    bool isValidBST(TreeNode* root) {
        return isbst(root,LONG_MIN,LONG_MAX);
    }
};
