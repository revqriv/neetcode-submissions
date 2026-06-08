class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> hash1;
        unordered_map<char,char> hash2;
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            if(hash1.count(s[i])==0){
                hash1[s[i]]=t[i];
            }
            else{
                if(hash1[s[i]]!=t[i]){
                    return false;
                }
            }
            if(hash2.count(t[i])==0){
                hash2[t[i]]=s[i];
            }
            else{
                if(hash2[t[i]]!=s[i]){
                    return false;
                }
            }
        }
        return true;
    }
};