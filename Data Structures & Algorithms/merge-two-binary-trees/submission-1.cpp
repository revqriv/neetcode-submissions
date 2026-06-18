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
TreeNode* node=new TreeNode(0);
private:
    void traverse(TreeNode* root,TreeNode* node){
        if(root==nullptr){
            return;
        }
        node->val+=root->val;
        if(node->left!=nullptr){
            traverse(root->left,node->left);
        }
        else if(root->left!=nullptr){
            node->left=new TreeNode(0);
            traverse(root->left,node->left);
        }
        if(node->right!=nullptr){
            traverse(root->right,node->right);
        }
        else if(root->right!=nullptr){
            node->right=new TreeNode(0);
            traverse(root->right,node->right);
        }
    }
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==nullptr && root2==nullptr){
            return nullptr;
        }
        traverse(root1,node);
        traverse(root2,node);
        return node;
    }
};