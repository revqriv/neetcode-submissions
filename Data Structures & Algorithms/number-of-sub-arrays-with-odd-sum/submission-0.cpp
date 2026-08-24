class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        unordered_map<int,int> hash;
        int ans=0;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum%2==0){
                hash[0]++;
                ans+=hash[1];
            }
            else{
                hash[1]++;
                ans+=hash[0]+1;
            }
        }
        return ans;
    }
};