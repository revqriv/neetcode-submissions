class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left=0;
        int window=0;
        int sum=0;
        int freq=0;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            window=right-left+1;
            while((nums[right]*window)-sum>k){
                sum-=nums[left];
                left++;
                window--;
            }
            freq=max(freq,right-left+1);
        }
        return freq;
    }
};