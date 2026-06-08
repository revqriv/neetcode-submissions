class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> pur;
        for(string s:tokens){
            if(s=="+" || s=="-" || s=="*" || s=="/"){
                int a=pur.top();
                pur.pop();
                int b=pur.top();                        
                pur.pop();
                if (s=="+") pur.push(a + b);
                else if (s=="-") pur.push(b - a);
                else if (s=="*") pur.push(a * b);
                else if (s=="/") pur.push(b / a);
            }
            else{
                pur.push(stoi(s));
            }
        } 
        return pur.top();
    }
};
