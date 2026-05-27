class Solution {
public:
    int climbStairs(int n) {
        int ans=0;
        int second=2;
        int first=1;
        if(n<3){
            return n;
        }
        for(int i=3;i<=n;i++){
            ans=first+second;
            first=second;
            second=ans;
        }
        return ans;

    }
};
