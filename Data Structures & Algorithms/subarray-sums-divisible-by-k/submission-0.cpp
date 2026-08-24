class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> prefixSum;
        prefixSum[0]=1;
        int ans=0;
        int curSum=0;
        for(int n:nums){
            curSum+=n;
            int diff=curSum%k;
            if(diff<0) diff+=k;
            if(prefixSum.count(diff)){
                ans+=prefixSum[diff];
            }
            prefixSum[diff]++;
        }
        return ans;
    }
};