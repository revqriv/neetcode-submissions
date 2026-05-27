class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=0;i<s.length()-1;i++){
            if(((int)s[i+1]- (int)s[i])>=0){
                sum=sum + ((int)s[i+1]- (int)s[i]);
            }
            else{
                sum=sum + ((int)s[i]- (int)s[i+1]);
            }
        }
        return sum;
        
    }
};