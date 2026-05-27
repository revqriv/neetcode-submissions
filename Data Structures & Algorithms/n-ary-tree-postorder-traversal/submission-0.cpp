/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    vector<int> ans;
public:
    vector<int> postorder(Node* root) {
        postFun(root);
        return ans;
    }
private:
    void postFun(Node* node){
        if(node==nullptr){
            return;
        }
        for(Node* which : node->children){
            postFun(which);
        }
        ans.push_back(node->val);
    }
};