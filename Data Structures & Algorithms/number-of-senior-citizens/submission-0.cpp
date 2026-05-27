class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(int i=0;i<details.size();i++){
            std::string age=std::string("")+details[i][11]+details[i][12];
            int num=std::stoi(age);
            if(num>60){
                count++;
            }
        }
        return count;
    }
};