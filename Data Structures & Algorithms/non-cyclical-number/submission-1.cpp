class Solution {
public:
    bool isHappy(int n) {
        int slow=n;
        int fast=fun(n);
        while(fast!=1 && slow!=fast){
            slow=fun(slow);    
            fast=fun(fun(fast));
        }
        
        return fast==1;
    }
private:
    int fun(int n){
        int ans=0;
        while(n>0){
            int temp=n%10;
            ans+=temp*temp;
            n=n/10;
        }
        return ans;
    }
};
