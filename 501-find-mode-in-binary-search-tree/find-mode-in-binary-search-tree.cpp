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
    unordered_map<int,int>m;
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        if(root==NULL){
            return ans;
        }

        ans.push_back(root->val);
        vector<int> a = findMode(root->left);
        vector<int> b = findMode(root->right);

        for(int i=0;i<ans.size();i++){
            m[ans[i]]++;
        }

        int maxF = 0;
        for(auto el : m){
            if(el.second>maxF){
                maxF = el.second;
            }
        }

        vector<int>v;

        for(auto e : m){
            if(e.second==maxF){
                v.push_back(e.first);
            }
        }
        return v;
    }
};