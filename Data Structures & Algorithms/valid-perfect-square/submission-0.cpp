class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==0 || num==1){
            return true;
        }
        double g=num;
        while(true){
            g=(g+(num/g))/2;
            if(abs((g*g)-num)<0.001){
                break;
            }
        }
        if(abs(g-(int)g)>0.001){
            return false;
        }
        else{
            return true;
        }
    }
};