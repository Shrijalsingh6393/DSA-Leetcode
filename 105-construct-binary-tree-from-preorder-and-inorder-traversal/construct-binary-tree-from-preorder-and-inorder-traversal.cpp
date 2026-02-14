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
    int idx = 0;
    TreeNode* func(vector<int>& preorder, vector<int>& inorder,int s,int e){
        if(s>e){return NULL;}

        int value = preorder[idx++];
        TreeNode* root = new TreeNode(value);

        int pos = s;
        while(inorder[pos]!=value){
            pos++;
        }

        root->left = func(preorder,inorder,s,pos-1);
        root->right = func(preorder,inorder,pos+1,e);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return func(preorder,inorder,0,inorder.size()-1);
    }
};