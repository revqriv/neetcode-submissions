class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int> hash={{5, 0},{10, 0},{20, 0}};
        for(int i:bills){
            if(i==5){
                hash[5]++;
            }
            else if(i==10){
                hash[10]++;
                if(hash[5]>0){
                    hash[5]--;
                }
                else{
                    return false;
                }
            }
            else if(i==20){
                hash[20]++;
                if(hash[10]>0){
                    hash[10]--;
                    hash[5]--;
                    if(hash[5]<0){
                        return false;
                    }
                }
                else{
                    hash[5]-=3;
                    if(hash[5]<0){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};