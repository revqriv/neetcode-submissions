class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int one_stepback=0;
        int two_stepback=0;
        int ans=0;
        for(int i=2;i<=cost.size();i++){
            ans=min(cost[i-1]+one_stepback,cost[i-2]+two_stepback);
            two_stepback=one_stepback;
            one_stepback=ans;
        }
        return ans;
    }
};
