
class Solution {
public:
    string makeGood(string s) {
       string ans="";
        int i=0;
        while(i<s.length()){
            if(ans.length()!=0 && abs(s[i]-ans[ans.length()-1])==32){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
            i++;
        }
        return ans; 
        
    }
};
