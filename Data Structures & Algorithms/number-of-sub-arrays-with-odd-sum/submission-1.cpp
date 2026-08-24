class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int MOD = 1e9 + 7;
        unordered_map<int,int> hash;
        hash[0]=1;
        int ans=0;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            int parity=(sum%2+2)%2;
            if(parity==0){
                hash[0]++;
                ans=(ans+hash[1])%MOD;
            }
            else{
                hash[1]++;
                ans=(ans+hash[0])%MOD;
            }
        }
        return ans;
    }
};