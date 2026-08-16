class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size()%groupSize!=0) return false;
        map<int,int> count;
        for(int card:hand)count[card]++;
    
        for(auto&[card, freq]:count) {
            if(freq>0){
            int count_val=freq;
            for(int i=0;i<groupSize;i++) {
                if(count[card+i]<count_val) return false;
                count[card+i]-=count_val;
            }
        }
    }
    return true;
    }
};
