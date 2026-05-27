class Solution {
public:
    bool canPermutePalindrome(string s) {
        int flag=-1;
        std::unordered_map<char,int> palin={};
        for(char c: s){
            palin[c]++;
        }
        for(const auto& [key,value]: palin){
            if(value%2!=0){
                flag++;
            }
        }
        if(flag>0){
            return false;
        }
        return true;
    }
};
