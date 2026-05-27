class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int special_index=0;
        int n=customers.size();
        int current_sum=0;
        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1){
                current_sum+=customers[i];
            }
        }
        int max_sum=current_sum;
        for(int i=minutes;i<n;i++){
            if(grumpy[i-minutes]==1)current_sum-=customers[i-minutes];
            if(grumpy[i]==1)current_sum+=customers[i];
            if(current_sum>max_sum){
                special_index=(i-minutes+1);
                max_sum=current_sum;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(i==special_index){
                for(int j=i;j<i+minutes;j++){
                    ans+=customers[j];
                }
                i+=minutes;
            }
            if(grumpy[i]==0){
                ans+=customers[i];
            }
        }
        return ans;
    }
};