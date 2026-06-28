class Solution {
public:
    string cur;
    vector<string> ans;
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return ans;
        }
        bkt(0,digits);
        return ans;
    }
    void bkt(int i,string digits){
        if(cur.size()==digits.size()){
            ans.push_back(cur);
            return;
        }
        if(i>=digits.size()) return;
        int temp=digits[i]-'0'-2;
        if(temp<=4){
            for(int j=0;j<3;j++){
                cur.push_back(char(97+temp*3 +j));
                bkt(i+1,digits);
                cur.pop_back();
            }
        }
        if(temp==5){
            for(int j=0;j<4;j++){
                cur.push_back(char(97+temp*3 +j));
                bkt(i+1,digits);
                cur.pop_back();
            } 
        }
        if(temp==6){
            for(int j=0;j<3;j++){
                cur.push_back(char(97+temp*3 +j+1));
                bkt(i+1,digits);
                cur.pop_back();
            } 
        }
        if(temp==7){
            for(int j=0;j<4;j++){
                cur.push_back(char(97+temp*3 +j +1));
                bkt(i+1,digits);
                cur.pop_back();
            } 
        }
        return;
    }
};