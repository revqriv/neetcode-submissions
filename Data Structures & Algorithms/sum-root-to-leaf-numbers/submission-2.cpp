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
    int sumNumbers(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int sum=0;
        return dfs(root,sum);
    }
private:
    int dfs(TreeNode* root,int tempsum){
        tempsum=tempsum*10+root->val;
        if(root->left==nullptr && root->right==nullptr){
            return tempsum;
        }
        int ans=0;
        if(root->left!=nullptr){
            ans+=dfs(root->left,tempsum);
        }
        if(root->right!=nullptr){
            ans+=dfs(root->right,tempsum);
        }
        return ans;
    }
};