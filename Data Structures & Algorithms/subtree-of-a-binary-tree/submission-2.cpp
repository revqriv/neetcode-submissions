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
    vector<TreeNode*> newroot;
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        vector<int> ans1;
        vector<int> ans2;
        traverse(root,subRoot);
        postOrder(subRoot,ans2);
        for(int i=0;i<newroot.size();i++){
            postOrder(newroot[i],ans1);
            if(ans1==ans2){
                return true;
            }
            ans1={};
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
private:
    void traverse(TreeNode* node, TreeNode* subRoot){
        if(node==nullptr){
            return;
        }
        if(node->val==subRoot->val){
            newroot.push_back(node);
        }
        traverse(node->left, subRoot);
        traverse(node->right, subRoot);
    }
};

