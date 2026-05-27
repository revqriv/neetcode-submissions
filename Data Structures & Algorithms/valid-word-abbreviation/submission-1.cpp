class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int j=0;
        int i=0;
        int num=0;
        while(i<word.size()&&j<abbr.size()){
            if(std::isdigit(static_cast<unsigned char>(abbr[j]))){
                if(abbr[j]=='0'){
                    return false;
                }
                num=0;
                while(j<abbr.length()&& isdigit(abbr[j])){
                    num=num*10+(abbr[j]-'0');
                    j++;
                }
                i+=num;
            }
            else{
                if(i>=word.size()){
                    return false;
                }
                if(abbr[j]!=word[i]){
                    return false;
                }
                else{
                    i++;
                    j++;
                }
            }
        }
        return i==word.size()&&j==abbr.size();
    }
};