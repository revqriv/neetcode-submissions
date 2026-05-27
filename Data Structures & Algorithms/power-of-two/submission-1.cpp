class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count=0;
        uint32_t bin=(uint32_t)n;
        for(int i=0;i<31;i++){
            if(bin&1){
                count++;
            }
            bin>>=1;
        }
        if(count==1){
            return true;
        }
        return false;
    }
};