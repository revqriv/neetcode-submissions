class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans={};
        for(int i=0;i<=n;i++){
            int count=0;
            uint32_t n =(uint32_t)i;
            while(n!=0){
                if(n&1){
                    count++;
                }
                n=n>>1;
            }
            ans.push_back(count);
        }
        return ans;
    }
};
