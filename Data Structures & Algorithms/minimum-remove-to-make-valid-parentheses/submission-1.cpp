class Solution {
public:
    string minRemoveToMakeValid(string s) {
        vector<char> stac;
        vector<int> index;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                stac.push_back(s[i]);
                index.push_back(i);
            }
            else if(s[i]==')'){
                if(!stac.empty() && stac[stac.size()-1]=='('){
                    stac.pop_back();
                    index.pop_back();
                }
                else{
                    stac.push_back(s[i]);
                    index.push_back(i);
                }
            }
        }
        string ans="";
        int point=0;
        for(int i=0;i<s.size();i++){
            if(point<index.size() && i==index[point]){
                point++;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};
