class Solution {
public:
    int appendCharacters(string s, string t) {
        int start=0;
        int lens=s.size();
        int lent=t.size();
        for(int i=0;i<lent;i++){
            int flag=0;
            for(int j=start;j<lens;j++){
                if(t[i]==s[j]){
                    start=j+1;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                return lent-i;
            }
        }
        return 0;
    }
};