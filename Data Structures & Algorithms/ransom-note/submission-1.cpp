class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        /*std::vector<int> count={};
        for(int i=0;i<ransomNote.size();i++){
            int flag=0;
            for(int j=0;j<magazine.size();j++){
                if(ransomNote[i]==magazine[j]){
                    if(std::find(count.begin(), count.end(), j)==count.end()){
                        count.push_back(j);
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==0){
                return false;
            }
        }
        return true;*/
        std::unordered_map<char,int> track={};
        for(char c: magazine){
            track[c]++;
        }
        for(char c: ransomNote){
            if(track[c]<=0){
                return false;
            }
            track[c]--;
        }
        return true;
    }
};