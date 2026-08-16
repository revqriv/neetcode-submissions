class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int> pr(n,INT_MAX);
        pr[src]=0;
        for(int i=0;i<k+1;i++){
            vector<int> temp_pr=pr;
            for(const auto& flight:flights){
                if(pr[flight[0]]!=INT_MAX && pr[flight[0]]+flight[2]<temp_pr[flight[1]]){
                    temp_pr[flight[1]]=pr[flight[0]]+flight[2];
                }
            }
            pr=temp_pr;
        }
        return pr[dst]==INT_MAX?-1:pr[dst];
    }
};
