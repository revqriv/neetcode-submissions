class Solution {
public:
    int numSquares(int n) {
        vector<int> memo(n+1,n);
        memo[0]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j*j<=n;j++){
                if(i-(j*j)>=0){
                    memo[i]=min(memo[i],1+memo[i-(j*j)]);
                }
            }
        }
        return memo[n];
    }
};