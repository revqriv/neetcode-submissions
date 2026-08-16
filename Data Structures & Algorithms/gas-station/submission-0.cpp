class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ans=0;
        int total=0;
        int sum_gas=0;
        int sum_cost=0;
        for(int i=0;i<gas.size();i++){
            total+= gas[i] - cost[i];
            if(total<0){
                total=0;
                ans=i+1;
            }
            sum_gas+=gas[i];
            sum_cost+=cost[i];
        }
        if(sum_cost>sum_gas){
            return -1;
        }
        return ans;
    }
};
