class Solution {
public:
    bool isValid(string s) {
        stack<char> brac = {};
        for(char c : s){
            if(c=='('){
                brac.push(c);
            }
            else if(c=='['){
                brac.push(c);
            }
            else if(c=='{'){
                brac.push(c);
            }
            else if(brac.empty()){
                return false;
            }
            else if(c==')'){
                if(brac.top()=='('){
                    brac.pop();
                }
                else{
                    return false;
                }
            }
            else if(c==']'){
                if(brac.top()=='['){
                    brac.pop();
                }
                else{
                    return false;
                }
            }
            else if(c=='}'){
                if(brac.top()=='{'){
                    brac.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(brac.empty()){
            return true;
        }
        return false;
    }
};
