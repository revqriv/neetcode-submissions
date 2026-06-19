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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans={};
        if(root==nullptr){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        int flag=1;
        while(!q.empty()){
            int level=q.size();
            vector<int> wtv;
            while(level){
                TreeNode* temp=q.front();
                q.pop();
                wtv.push_back(temp->val);
                if(temp->left!=nullptr) q.push(temp->left);
                if(temp->right!=nullptr) q.push(temp->right);
                level--;
            }
            if(ans.size()%2==1) reverse(wtv.begin(),wtv.end());
            ans.push_back(wtv);
        }
        return ans;
    }
};