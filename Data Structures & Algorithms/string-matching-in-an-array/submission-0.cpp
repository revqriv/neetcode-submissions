class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        std::vector<string> sub={};
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size();j++){
                if(i!=j){
                    if(words[j].find(words[i])!=std::string::npos){
                        sub.push_back(words[i]);
                        break;
                    }
                }
            }
        }
        return sub;
    }
};