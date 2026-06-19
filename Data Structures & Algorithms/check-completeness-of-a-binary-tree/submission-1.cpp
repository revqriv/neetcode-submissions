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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q={};
        q.push(root);
        int flag=0;
        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();
            if(temp->left!=nullptr && flag==0){
                q.push(temp->left);
            }
            else if(temp->left!=nullptr && flag==1){
                return false;
            }
            else{
                flag=1;
            }
            if(temp->right!=nullptr && flag==0){
                q.push(temp->right);
            }
            else if(temp->right!=nullptr && flag==1){
                return false;
            }
            else{
                flag=1;
            }
        }
        return true;
    }
};