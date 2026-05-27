class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> folder={};
        for(string s : logs){
            if(s=="../"){
                if(!folder.empty()){
                    folder.pop();
                }
            }
            else if(s!="./"){
                folder.push(s);
            }
        }
        return folder.size();
    }
};