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
    void func(TreeNode* root,int ts,vector<vector<int>>&ans,vector<int>&v){
        if(root==NULL){
            return;
        }
        v.push_back(root->val);
        ts = ts-root->val;

        if(root->left==NULL && root->right==NULL){
            if(ts==0){
                ans.push_back(v);
            }
        }

        func(root->left,ts,ans,v);
        func(root->right,ts,ans,v);

        v.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>v;

        func(root,targetSum,ans,v);

        return ans;
    }
};