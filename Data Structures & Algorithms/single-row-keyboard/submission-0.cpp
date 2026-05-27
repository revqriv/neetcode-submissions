class Solution {
public:
    int calculateTime(string keyboard, string word) {
        std::unordered_map<char,int> indexes={};
        for (int i = 0; i < keyboard.size(); i++) {
            indexes[keyboard[i]] = i;
        }
        int sum=indexes[word[0]];
        for(int i=0;i<word.size()-1;i++){
            sum+=std::abs(indexes[word[i]]-indexes[word[i+1]]);
        }
        return sum;
    }
};
