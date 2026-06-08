class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map <string,int> count;
        for(string s:emails){
            string temp="";
            int flag=0;
            int f=0;
            for(char c:s){
                if(c=='+'){
                    f=1;
                }
                else if(c=='@'){
                    temp+=c;
                    flag=1;
                    f=0;
                    continue;
                }
                else if(flag==1 && c=='.'){
                    temp+=c;
                }
                else if(c!='.' && f==0){
                    temp+=c;
                }
            }
            count[temp]++;
        }
        return count.size();
    }
};