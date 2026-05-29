class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left=0;
        int right=arr.size()-1;
        while(right-left+1>k){
            if(abs(arr[right]-x)>=abs(arr[left]-x)){
                right--;
            }
            else{
                left++;
            }
        }
        vector<int> ans(k,0);
        for(int i=left;i<right+1;i++){
            ans[i-left]=arr[i];
        }
        return ans;
    }
};