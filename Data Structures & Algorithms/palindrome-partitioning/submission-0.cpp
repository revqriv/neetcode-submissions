class Solution {
public:
    string cur;
    vector<string> temp;
    vector<vector<string>> ans;
    vector<vector<string>> partition(string s) {
        bkt(s,0);
        return ans;
    }
    void bkt(string s,int i){
        if(i>=s.size()){
            ans.push_back(temp);
            return;
        }
        for(int j=i;j<s.size();j++){
            string cur=s.substr(i,j-i+1);
            if(pal(cur)){
                temp.push_back(cur);
                bkt(s,j+1);
                temp.pop_back();
            }
        }
    }
    bool pal(string s){
        string temp=s;
        reverse(s.begin(),s.end());
        if(s==temp){
            return true;
        }
        return false;
    }
};
