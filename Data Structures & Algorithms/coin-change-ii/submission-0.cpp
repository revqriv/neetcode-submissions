class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> memo(amount+1,0);
        memo[0]=1;
        for (int c:coins){
            for(int i=c;i<=amount;i++){
                memo[i]+=memo[i-c];
            }
        }
        return memo[amount];
    }
};
