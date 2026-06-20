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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr){
            return root;
        }
        if(p->val>root->val && q->val>root->val){
            root->right=lowestCommonAncestor(root->right,p,q);
            if(root->right!=nullptr){
                return root->right;
            }
        }
        else if(p->val<root->val && q->val<root->val){
            root->left=lowestCommonAncestor(root->left,p,q);
            if(root->left!=nullptr){
                return root->left;
            }
        }
        else{
            return root;
        }
    }
};
