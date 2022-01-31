class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string str="";
        for(int i=0;i<strs[0].length();i++){
            char pre=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=pre)
                    return str;
            }
            str+=pre;
        }
        return str;
    }
};
