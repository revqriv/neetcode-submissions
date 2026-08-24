class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int sum=0;
        for(int n:nums){
            sum+=n;
        }
        int ans=nums.size();
        int r=sum%p;
        if(r==0) return 0;
        unordered_map<int,int> hash={{0,-1}};
        int curSum=0;
        for(int i=0;i<nums.size();i++){
            curSum =(curSum + nums[i])%p;
            int prefix=(curSum-r+p)%p;
            if(hash.count(prefix)){
                ans=min(ans,i-hash[prefix]);
            }
            hash[curSum]=i;
        }
        return ans==nums.size()?-1:ans;
    }
};