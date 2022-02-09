class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long int a = 0 ; a*a <= c ; a++){
            double b = sqrt(c - a*a);
            if(floor(b) == ceil(b))
                return true;
        }
        return false;
    }
};
