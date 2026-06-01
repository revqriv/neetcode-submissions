class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int> hash={{0,-1}};
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int r=sum%k;
            if(hash.count(r)==0){
                hash[r]=i;
            }
            else if(i-hash[r]>1){
                return true;
            }
        }
        return false;
    }
};