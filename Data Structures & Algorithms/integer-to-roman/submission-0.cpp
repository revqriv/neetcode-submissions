class Solution {
public:
    string intToRoman(int num) {
        int arr[4]={0,0,0,0};
        int i=0;
        while(num>0){
            int x=num%10;
            arr[i]=x;
            num=num/10;
            i++;
        }
        string s="";
        for(int i=0;i<arr[3];i++){
            s=s+"M";
        }
        if(arr[2]==4){
            s=s+"CD";
        }
        else if(arr[2]==9){
            s=s+"CM";
        }
        else if(arr[2]<5){
            for(int i=0;i<arr[2];i++){
                s=s+"C";
            }
        }
        else{
            s=s+"D";
            for(int i=0;i<arr[2]-5;i++){
            s=s+"C";
            }
        }
       
        if(arr[1]==4){
            s=s+"XL";
        }
        else if(arr[1]==9){
            s=s+"XC";
        }
        else if(arr[1]<5){
            for(int i=0;i<arr[1];i++){
            s=s+"X";
            }
        }
        else{
            s=s+"L";
            for(int i=0;i<arr[1]-5;i++){
                s=s+"X";
            }
        }
        
        
        if(arr[0]==4){
            s=s+"IV";
        }
        else if(arr[0]==9){
            s=s+"IX";
        }
        else if(arr[0]<5){
            for(int i=0;i<arr[0];i++){
            s=s+"I";
            }
        }
        else{
            s=s+"V";
            for(int i=0;i<arr[0]-5;i++){
                s=s+"I";
            }
        }
        return s;
    }
};