class Solution {
public:
    bool isHappy(int n) {
        int ans;
        ans=fun(n);
        int i=0;
        while(i<20){
            if(ans==1){
                return true;
            }
            else{
                ans=fun(ans);
            }
            i++;
        }
        return false;
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
