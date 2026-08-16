class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx=nums[0];
        int curmin=1;
        int curmax=1;
        for(int num:nums){
            int temp=curmax*num;
            curmax=max(max(num*curmax,num*curmin),num);
            curmin=min(min(temp,curmin*num),num);
            mx=max(mx,curmax);
        }
        return mx;
    }
};
