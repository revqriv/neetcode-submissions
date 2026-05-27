class Solution {
public:
    bool confusingNumber(int n) {
        int num=n;
        int newnum=0;
        for(int i=0;num>0;i++){
            int rem=num%10;
            switch(rem){
                case 2: return false;
                case 3: return false;
                case 4: return false;
                case 5: return false;
                case 7: return false;
                case 1:
                    newnum=newnum*pow(10,i)+1;
                    break;
                case 0:
                    newnum=newnum*pow(10,i)+0;
                    break;
                case 6:
                    newnum=newnum*pow(10,i)+9;
                    break;
                case 9:
                    newnum=newnum*pow(10,i)+6;
                    break;
                case 8:
                    newnum=newnum*pow(10,i)+8;
                    break;
            }
            num=num/10;
        }
        if(n==newnum){
            return false;
        }
        return true;
    }
};
