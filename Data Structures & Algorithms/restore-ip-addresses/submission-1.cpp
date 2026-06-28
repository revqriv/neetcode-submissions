class Solution {
public:
    int dot=0;
    string cur;
    vector<string> ans;
    vector<string> restoreIpAddresses(string s) {
        bt(s,0);
        return ans;
    }
    void bt(string s,int i){
        if(i>=s.size()){
            if(dot==4){
                ans.push_back(cur.substr(0,cur.size()-1));
            }
            return;
        }
        for(int j=i;j<s.size();j++){
            string temp=s.substr(i,j-i+1);
            if(temp.size()>3) break;
            if(stoi(temp)<=255){
                if(stoi(temp)==0 && temp.size()==1 || temp[0]!='0'){
                    cur+=temp;
                    cur.push_back('.');
                    dot++;
                    bt(s,j+1);
                    for(int k=0;k<=temp.size();k++){
                        cur.pop_back();
                    }
                    dot--;
                }
            }
        }
    }
};