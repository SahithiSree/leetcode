//not efficient
class Solution {
public:
    int romanToInt(string s) {
        map<char,int>num;
        num['I']=1;
        num['V']=5;
        num['X']=10;
        num['L']=50;
        num['C']=100;
        num['D']=500;
        num['M']=1000;
        int sum=0;
        int l = s.length();
        for (int i = 0; i < l; i++) {
           if(i<l-1&&num[s.at(i)]<num[s.at(i+1)])
                sum-=num[s.at(i)];
            else
                sum+=num[s.at(i)];
        }
        
        return sum;
    }
};
