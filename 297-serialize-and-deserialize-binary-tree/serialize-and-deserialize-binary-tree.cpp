/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL){return "";}
        queue<TreeNode*>q;
        q.push(root);

        string result = "";

        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();

            if(curr==NULL){
                result += "null,";
            }
            else{
                result += to_string(curr->val)+",";
                q.push(curr->left);
                q.push(curr->right);

            }
        }
        return result;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0){
            return NULL;
        }
        stringstream ss(data);
        string str;

        getline(ss, str, ',');
        TreeNode* root = new TreeNode(stoi(str));

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            // Left child
            if(getline(ss, str, ',')) {
                if(str != "null") {
                    node->left = new TreeNode(stoi(str));
                    q.push(node->left);
                }
            }

            // Right child
            if(getline(ss, str, ',')) {
                if(str != "null") {
                    node->right = new TreeNode(stoi(str));
                    q.push(node->right);
                }
            }
        }

        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));