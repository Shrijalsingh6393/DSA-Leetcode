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
    int func(TreeNode* root,int v){
        if(root==NULL){
            return 0;
        }
        v = v*10 + root->val;

        if(root->left==NULL && root->right==NULL){
            return v;
        }

        return func(root->left,v) + func(root->right,v);
    }
    int sumNumbers(TreeNode* root) {
        return func(root,0);
    }
};