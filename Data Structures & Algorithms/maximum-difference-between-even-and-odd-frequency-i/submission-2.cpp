class Solution {
public:
    int maxDifference(string s) {
        int oddmax=0;
        int evenmax=100;
        std::string extra="";
        std::unordered_map<char,int> count;
        for(int i=0;i<s.size();i++){
            if(count.count(s[i])){
                count[s[i]]++;
            }
            else{
                count[s[i]]=1;
                extra+=s[i];
            }
        }
        for(int i=0;i<extra.size();i++){
            if(count[extra[i]]%2==0){
                if(count[extra[i]]<evenmax){
                    evenmax=count[extra[i]];
                }
            }
            else{
                if(count[extra[i]]>oddmax){
                    oddmax=count[extra[i]];
                }
            }
        }
        return oddmax-evenmax;
    }
};