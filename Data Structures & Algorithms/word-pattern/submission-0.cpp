class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;
        stringstream ss(s);
        while (ss>>word) {
            words.push_back(word);
        }
        if (pattern.size()!=words.size()) {
            return false;
        }
        unordered_map<char,string> charToWord;
        unordered_set<string> usedWords; 
        
        for (size_t i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string w = words[i];
            if (charToWord.find(c) != charToWord.end()) {
                if (charToWord[c] != w) {
                    return false;
                }
            } 
            else {
                if (usedWords.find(w) != usedWords.end()) {
                    return false; 
                }
                charToWord[c] = w;
                usedWords.insert(w);
            }
        }
        
        return true;
    }
};
