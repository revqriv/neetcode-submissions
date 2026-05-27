class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int len=word1.size()>word2.size()?word2.size():word1.size();
        for(int i=0;i<len;i++){
            ans+=word1[i];
            ans+=word2[i];
        }
        if(word1.size()>word2.size()){
            for(int i=len;i<word1.size();i++){
                ans+=word1[i];
            }
        }
        else{
            for(int i=len;i<word2.size();i++){
                ans+=word2[i];
            }
        }
        return ans;
    }
};