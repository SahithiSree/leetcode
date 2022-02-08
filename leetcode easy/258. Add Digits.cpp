class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        while(num>0){
            int r=num%10;
            sum=sum+r;
            num=(int)num/10;
        }
        if(sum<10)
            return sum;
        else
            return addDigits(sum);
    }
};
