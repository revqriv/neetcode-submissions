class Solution {
public:
    string cur;
    vector<string> ans;
    vector<string> mapp={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return ans;
        bkt(0,digits);
        return ans;
    }
    void bkt(int i,string digits){
        if(cur.size()==digits.size()){
            ans.push_back(cur);
            return;
        }
        if(i>=digits.size()) return;
        int temp=digits[i] - '0';
        for(char c:mapp[temp]){
            cur.push_back(c);
            bkt(i+1,digits);
            cur.pop_back();
        }
    }
};
