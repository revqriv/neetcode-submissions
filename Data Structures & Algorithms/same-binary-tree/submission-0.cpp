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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> ans1;
        vector<int> ans2;
        postOrder(p,ans1);
        postOrder(q,ans2);
        if(ans1==ans2){
            return true;
        }
        return false;
    }
private:
    void postOrder(TreeNode* node,vector<int>& ans){
        if(node==nullptr){
            ans.push_back('null');
            return;
        }
        postOrder(node->left,ans);
        postOrder(node->right,ans);
        ans.push_back(node->val);
    }
};
