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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorderFunc(root,ans);
        return ans;
    }
private:
    void inorderFunc(TreeNode* node, vector<int>& ans){
        if(node==nullptr){
            return;
        }
        inorderFunc(node->left,ans);
        ans.push_back(node->val);
        inorderFunc(node->right,ans);
    }
};