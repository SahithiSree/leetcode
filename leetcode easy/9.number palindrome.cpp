//12ms runtime
class Solution {
public:
    bool isPalindrome(int x) {
      unsigned int sum=0;
        int r=0,n;
        n=x;
        while(x>0){
        r=x%10;
        sum=sum*10+r;
        x=x/10;
        }
        if (n==sum){
            return true;
        }
        else
        {
            return false;
        }
    }
};
******************************************************************************
//34ms runtime
class Solution {
public:
    bool isPalindrome(int x) {
       if(x < 0)
            return false;
    
        long int num = x, rev = 0, rem = 0;
        
		
        while(x != 0)
        {
            rem = x%10;
            rev = rev*10 + rem;
            x /= 10;
        }
        
		
        if(num == rev)
            return true;  
        else
            return false;
    }
};
