//0ms 100% faster
class Solution {
public:
    int mySqrt(int x) {
        return sqrt(x);
        
    }
};

********************************************
class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        
        int i;
        for(i=1;i<=x/i;i++);
        i--;
        return i;
        
    }
};
