//3ms
class Solution {
public:
    int lengthOfLastWord(string s) {
       int l=s.length();
        int count=0;
        for(int i=l-1;i>=0;i--)
        {       if(s[i]==' ' && count==0)
            {
                continue;  }
            if(s[i]!=' ')
            {
                count++; }
            if(s[i]==' ' && count>0)
            {
                break;   }}
        return count;
    }
};
**************************************************************

//7ms

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ' && length>0) return length;
            if(s[i]!=' ') length++;
        }
        return length;
    }
};
