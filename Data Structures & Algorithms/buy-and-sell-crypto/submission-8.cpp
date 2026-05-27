class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0 || prices.size()==1){
            return 0;
        }
        int buy=prices[0];
        int prof=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<buy){
                buy=prices[i];
            }
            else if(prices[i]-buy>prof){
                prof=prices[i]-buy;
            }
        }
        return prof;
    }
};
