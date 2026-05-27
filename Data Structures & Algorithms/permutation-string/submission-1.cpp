class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    unordered_map<char,int> s1_map;
    for(int i=0;i<s1.size();i++){
        s1_map[s1[i]]++;
    }
    unordered_map<char,int> s2_map;
    for(int i=0;i<s1.size();i++){
        s2_map[s2[i]]++;
    }
    for(int i=s1.size();i<=s2.size();i++){
        if(s1_map==s2_map){
            return true;
        }
        s2_map[s2[i]]++;
        s2_map[s2[i-s1.size()]]--;
        if(s2_map[s2[i-s1.size()]]==0){
            s2_map.erase(s2[i-s1.size()]);
        }
    }
    return false;
    }
};
