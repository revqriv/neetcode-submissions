class Solution {
public:
    bool isPalindrome(int x) {
        int i=0;
        int n=0;
        int o=x;
        while(x>0){
            n=n*10+(x%10);
            x=x/10;
            i++;
        }
        if(o==n){
            return true;
        }
        else{
            return false;
        }
    }
};