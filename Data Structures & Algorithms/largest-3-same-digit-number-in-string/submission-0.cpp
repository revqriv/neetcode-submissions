class Solution {
public:
    string largestGoodInteger(string num) {
        std::string ans="";
        for(int i=1;i<num.size()-1;i++){
            if(num[i-1]==num[i]&&num[i]==num[i+1]){
                string comp(3,num[i-1]);
                if(comp>ans){
                    ans=comp;
                }
            }
        }
        return ans;
    }
};