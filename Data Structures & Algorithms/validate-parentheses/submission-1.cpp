class Solution {
public:
    bool isValid(string s) {
        stack<char> st ; 
        for(char c :s ){
            if(c == '[' || c == '{' || c == '(') {
                if(c=='[') st.push(']'); 
                if(c=='(') st.push(')'); 
                if(c == '{') st.push('}'); 
            }else { 
                    if(st.empty()) return false ; 
                    if(st.top() == c) {
                        st.pop();
                    }else {
                        return false ;
                    } 

                }
        } 
        return st.empty() ;
    }
};
