class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int sum=0;
        vector<int> ans(k,0);
        for(int i=0;i<k;i++){
            sum+=abs(x-arr[i]);
        }
        int min=sum;
        int start=0;
        for(int right=k;right<arr.size();right++){
            sum+=abs(x-arr[right]);
            sum-=abs(x-arr[right-k]);
            if(sum<min){
                start=right-k+1;
                min=sum;
            }
        }
        for(int i=start;i<start+k;i++){
            ans[i-start]=arr[i];
        }
        return ans;
    }
};