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
private:
    int dfs(TreeNode* node){
        if(node==nullptr){
            return 0;
        }
        int left=dfs(node->left);
        int right=dfs(node->right);
        if(abs(left-right)>1){
            flag=0;
        }
        return 1 + max(left,right);
    }
public:
    int flag=1;
    bool isBalanced(TreeNode* root) {
        dfs(root);
        if(flag==1){
            return true;
        }
        return false;  
    }
};
