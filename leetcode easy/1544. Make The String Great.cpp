
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
************************************************************************************
class Solution {
public:
    string makeGood(string s) {
     size_t prev{0};
        while (s.size() != prev) {
            prev = s.size();
            for (auto i{1}; i < s.size(); ++i) {
                if ((isupper(s[i]) and s[i-1] == tolower(s[i])) or
                    (islower(s[i]) and s[i-1] == toupper(s[i]))) {
                    s.erase(i-1, 2);
                    --i;
                }
            }
        }
        return s;
    }
};
