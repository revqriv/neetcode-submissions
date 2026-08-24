class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
        int curSum=0;
        unordered_map<int,int> prefixSum;
        prefixSum[0]=1;
        for(int n:nums){
            curSum+=n;
            int diff=curSum-k;
            if(prefixSum.count(diff)){
                ans+=prefixSum[diff];
            }
            prefixSum[curSum]++;
        }
        return ans;

    }
};