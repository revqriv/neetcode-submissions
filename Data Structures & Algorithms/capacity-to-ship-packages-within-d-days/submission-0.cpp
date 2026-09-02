class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start=*max_element(weights.begin(),weights.end());
        int end=accumulate(weights.begin(),weights.end(),0);
        int ans=end;
        while(start<=end){
            int mid=start+(end-start)/2;
            int day=1;
            int total=0;
            for(int i=0;i<weights.size();i++){
                if(total+weights[i]<=mid) total+=weights[i];
                else{
                    total=weights[i];
                    day++;
                }
            }
            if(day>days){
                start=mid+1;
            }
            else if(day<=days){
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
};