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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        //check the solution without new vectors and just the indexes being passed in;
        if(inorder.empty() && postorder.empty()){
            return nullptr;
        }
        TreeNode* root=new TreeNode(postorder[postorder.size()-1]);
        auto idx=find(inorder.begin(),inorder.end(),postorder[postorder.size()-1]) - inorder.begin();
        vector<int> leftIn(inorder.begin(),inorder.begin() + idx);
        vector<int> rightIn(inorder.begin() + idx + 1, inorder.end());
        vector<int> leftPo(postorder.begin(), postorder.begin() + idx);
        vector<int> rightPo(postorder.begin() + idx ,postorder.end() -1);
        root->left=buildTree(leftIn,leftPo);
        root->right=buildTree(rightIn,rightPo);
        return root;
    }
};