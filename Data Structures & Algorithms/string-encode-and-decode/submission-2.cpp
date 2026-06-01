class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(string s:strs){
            ans+=to_string(s.size());
            ans+='#';
            ans+=s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        while(i<s.size()){
            int has=s.find('#',i);
            int len=stoi(s.substr(i,has-i));
            string temp=s.substr(has+1,len);
            ans.push_back(temp);
            i=has+1;
            i+=len;
        }
        return ans;
    }
};
