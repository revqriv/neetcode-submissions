class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        std::unordered_map<char,int> count1;
        std::unordered_map<char,int> count2;
        for(int i=0;i<s.size();i++){
            count1[s[i]]++;
            count2[t[i]]++;
        }
        if(count1==count2){
            return true;
        }
        else{
            return false;
        }
    }
};
