class Solution {
public:
    bool validWordSquare(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            std::string str="";
            for(int j=0;j<words.size();j++){
                if(i<words[j].size()){
                    str+=words[j][i];
                }
            }
            if(words[i]!=str){
                    return false;
            }
        }
        return true;
    }
};
