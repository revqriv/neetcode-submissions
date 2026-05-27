class Solution {
public:
    int mySqrt(int x) {  
        if(x==0){
            return 0;
        }
        else if(x<4){
            return 1;
        }
        else{
            long g=x;
            while(g*g>x){
                g=(g+(x/g))/2;
                if(g==x/g){
                    return (int)g;
                }
            }
            return (int)g;
        }  
    }
};