class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        char top;
        for(int i = 0; i < s.length(); i++){
            if(s[i]=='(' || s[i]=='{'|| s[i]=='['){
                stk.push(s[i]);
            }
            else if (!stk.empty()){
                top=stk.top();
                 stk.pop();
                if(top=='(' && s[i]!=')' || top=='{' && s[i]!='}' || top=='[' && s[i]!=']' )
                {
                   return false;
                }      
            }
           else{
                    return false;
                }
                
        }
        return stk.empty();
        
    }
};
