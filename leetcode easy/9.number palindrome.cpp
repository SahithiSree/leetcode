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
**************************************optimised*********************************************
 class Solution {
    public: bool isPalindrome(int x) {
        // Special cases:
        // As discussed above, when x < 0, x is not a palindrome.
        // Also if the last digit of the number is 0, in order to be a palindrome,
        // the first digit of the number also needs to be 0.
        // Only 0 satisfy this property.
        if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedNumber = 0;
        while(x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }

        // When the length is an odd number, we can get rid of the middle digit by revertedNumber/10
        // For example when the input is 12321, at the end of the while loop we get x = 12, revertedNumber = 123,
        // since the middle digit doesn't matter in palidrome(it will always equal to itself), we can simply get rid of it.
        return x == revertedNumber || x == revertedNumber/10;
    }
};
