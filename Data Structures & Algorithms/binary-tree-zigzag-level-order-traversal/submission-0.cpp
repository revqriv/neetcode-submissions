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
        vector<int> a={root->val};
        ans.push_back(a);
        int flag=1;
        while(!q.empty()){
            int level=q.size();
            vector<int> wtv;
            while(level){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left!=nullptr){
                    q.push(temp->left);
                    wtv.push_back(temp->left->val);
                }
                if(temp->right!=nullptr){
                    q.push(temp->right);
                    wtv.push_back(temp->right->val);
                }
                level--;
            }
            if(wtv.empty()){
                break;
            }
            if(flag==1){
                reverse(wtv.begin(),wtv.end());
                ans.push_back(wtv);
                flag=0;
            }
            else{
                flag=1;
                ans.push_back(wtv);
            }
        }
        return ans;
    }
};