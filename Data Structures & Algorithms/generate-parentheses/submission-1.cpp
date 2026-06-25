class Solution {
public:
    vector<string> ans;
    vector<string> generateParenthesis(int n) {
        string cur;
        bt(0,0,n,cur);
        return ans;
    }
    void bt(int open,int close,int n,string cur){
        if(open==n && close==n){
            ans.push_back(cur);
            return;
        }
        if(open<n){
            cur.push_back('(');
            bt(open+1,close,n,cur);
            cur.pop_back();
        }
        if(close<open){
            cur.push_back(')');
            bt(open,close+1,n,cur);
            cur.pop_back();
        }
    }
};
