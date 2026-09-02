class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int start=1;
        int end=piles[piles.size()-1];
        int total=0;
        int ans=end;
        while(start<=end){
            int mid=start+(end-start)/2;
            total=0;
            for(int i=0;i<piles.size();i++){
                total+=(piles[i]+mid-1)/mid;
            }
            if(total<=h){
                ans=mid;
                end=mid-1;
            }
            else if(total>h) start=mid+1;
        }
        return ans;
    }
};
