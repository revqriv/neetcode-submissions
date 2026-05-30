class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> hash;
        for(int i=0;i<order.size();i++){
            hash[order[i]]=i;
        }
        for(int j=0;j<s.size();j++){
            for(int k=j+1;k<s.size();k++){
                if(hash.contains(s[j]) && hash.contains(s[k])){
                    if(hash[s[j]]>hash[s[k]]){
                        char c=s[j];
                        s[j]=s[k];
                        s[k]=c;
                    }
                }
            }
        }
        return s;
    }
};