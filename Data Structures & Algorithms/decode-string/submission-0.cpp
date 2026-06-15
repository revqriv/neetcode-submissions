class Solution {
public:
    string decodeString(string s) {
        vector<string> strStack;
        vector<int> cntStack;
        string cur="";
        int k=0;
        for(char c:s){
            if(isdigit(c)){
                k=k*10+(c-'0');
            }
            else if(c=='['){
                strStack.push_back(cur);
                cntStack.push_back(k);
                cur="";
                k=0;
            }
            else if(c==']'){
                string temp=cur;
                cur=strStack.back();
                strStack.pop_back();
                int t=cntStack.back();
                cntStack.pop_back();
                for(int i=0;i<t;i++){
                    cur+=temp;
                }
            }
            else{
                cur+=c;
            }
        }
        return cur;
    }
};