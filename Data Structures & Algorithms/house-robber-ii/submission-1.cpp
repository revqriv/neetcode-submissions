class Solution {
public:
    int rob(vector<int>& nums) {
        int rob1=0;
        int rob2=0;
        int robb1=0;
        int robb2=0;
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0;i<nums.size()-1;i++){
            int temp=max(nums[i]+rob1,rob2);
            rob1=rob2;
            rob2=temp;

            int tempp=max(nums[i+1]+robb1,robb2);
            robb1=robb2;
            robb2=tempp;
        }
        return max(rob2,robb2);
    }
};
