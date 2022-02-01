//21ms
class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos=0;
        pos=haystack.find(needle);
        return pos;
        
    }
};

**************************************************
//10ms
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length() == 0)
            return 0;
        if(needle.size() > haystack.size()) return -1;
        int hlen = haystack.length();
        int nlen = needle.length();
        int currIndex = 0;
        int index = 0;
        int p1 = 0;
        int p2 = nlen-1;
        while(index < hlen && nlen <= (hlen - index))
        {
            if(haystack[index] == needle[0])
            {
                currIndex = index;
                
                while(index < hlen && index+p2< hlen)
                {
                    if(p1<=p2 && haystack[index] == needle[p1] && haystack[currIndex+p2] == needle[p2])
                    {
                        index++;
                        p1++;
                        p2--;
                    }
                    else
                        break;
                }
                if(p1>p2)        
                    return currIndex;
                
                index = currIndex;
                p1 = 0;
                p2 = nlen-1;
            }
            index++;
        }
        return -1;
    }
};
