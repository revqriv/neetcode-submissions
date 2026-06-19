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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans={};
        queue<TreeNode*> q={};
        if(root==nullptr){
            return ans;
        }
        q.push(root);
        while(!q.empty()){
            int level=q.size();
            vector<int> inside;
            while(level){
                TreeNode* temp=q.front();
                q.pop();
                inside.push_back(temp->val);
                if(temp->left!=nullptr){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
                level--;
            }
            ans.push_back(inside);
        }
        return ans;
    }
};
