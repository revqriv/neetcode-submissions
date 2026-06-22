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
    vector<int> ans;
    vector<int> inorder(TreeNode* root){
        if(root->left==nullptr && root->right==nullptr){
            ans.push_back(root->val);
            return ans;
        }
        if(root->left!=nullptr){
            inorder(root->left);
        }
        ans.push_back(root->val);
        if(root->right!=nullptr){
            inorder(root->right);
        }
        return ans;
    }
    void recoverTree(TreeNode* root) {
        vector<int> ans=inorder(root);
        int a=0;
        int b=0;
        int i=1;
        for(int i=0; i<ans.size()-1; i++){
            if(ans[i] > ans[i+1]){
                if(a==0) a = ans[i];
                b = ans[i+1];
            }
        }
        switc(root,a,b);
        return;
    }
private:
    void switc(TreeNode* root,int a,int b){
        if(root->left==nullptr && root->right==nullptr){
            if(root->val==a){
                root->val=b;
            }
            else if(root->val==b){
                root->val=a;
            }
            return;
        }
        if(root->left!=nullptr){
            switc(root->left,a,b);
        }
        if(root->val==a){
            root->val=b;
        }
        else if(root->val==b){
            root->val=a;
        }
        if(root->right!=nullptr){
            switc(root->right,a,b);
        }
        return;
    }
};