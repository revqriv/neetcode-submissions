class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.00;
        for(int i=1;i<=n;i++){
            ans=ans*x;
        }
        if(n<0){
            int newn=n*-1;
            for(int i=1;i<=newn;i++){
            ans=ans/x;
        }
        }
        return ans;
    }
};
