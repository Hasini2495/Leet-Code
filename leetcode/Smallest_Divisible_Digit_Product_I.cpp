class Solution {
public:
    int smallestNumber(int n, int t) {
        int k=0;
        for(int i=n;i<=100;i++){
            int num=i;
            int product=1;
            while(num > 0){
            int remainder=num%10;
            product=product*remainder;
            num/=10;
            }
            
            if(product % t == 0 ){
                k=i;
                break;
            }
        }
        return k;
    }
};