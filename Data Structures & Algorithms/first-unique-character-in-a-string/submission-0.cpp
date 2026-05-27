class Solution {
public:
    int firstUniqChar(string s) {
        int ans=-1;
        std::unordered_map<char,int> count={};
        for(char c: s){
            count[c]++;
        }
        for(int i=0;i<s.size();i++){
            if(count[s[i]]==1){
                return i;
            }
        }
        return ans;    
    }
};