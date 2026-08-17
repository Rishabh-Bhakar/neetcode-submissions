class Solution {
public:
    bool isValid(string s) {
        int len=s.length();
        stack<int>st;
        for(int i=0;i<len;i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                else if(s[i]==')' && st.top()=='('){
                    st.pop();
                }
                else if(s[i]==']' && st.top()=='['){
                    st.pop();
                }
                else if(s[i]=='}' && st.top()=='{'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
            if(st.empty()){
                return true;
            }else{
                return false;
            }
        
    }
};
