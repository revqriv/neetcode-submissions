class Solution {
public:
    bool isSubsequence(string s, string t) {
        int start=0;
        int count=0;
        int lens=s.size();
        int lent=t.size();
        for(int i=0;i<lens;i++){
            for(int j=start;j<lent;j++){
                if(s[i]==t[j]){
                    start=j+1;
                    count++;
                    break;
                }
            }  
        }
        if(count==s.size()){
            return true;
        }
        else{
            return false;
        }   
    }
};