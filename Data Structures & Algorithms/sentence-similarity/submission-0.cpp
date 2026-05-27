class Solution {
public:
    bool areSentencesSimilar(vector<string>& sentence1, vector<string>& sentence2, vector<vector<string>>& similarPairs) {
        if(sentence1.size()!=sentence2.size()){
            return false;
        }
        for(int i=0;i<sentence1.size();i++){
            if(sentence1[i]!=sentence2[i]){
                vector<string> temp1={sentence1[i],sentence2[i]};
                vector<string> temp2={sentence2[i],sentence1[i]};
                if(std::find(similarPairs.begin(),similarPairs.end(),temp1)==similarPairs.end()&&std::find(similarPairs.begin(),similarPairs.end(),temp2)==similarPairs.end()){
                    return false;
                }
            }
        }
        return true;
    }
};
