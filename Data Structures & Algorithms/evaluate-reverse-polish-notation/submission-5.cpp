class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st ; 
        for( string c : tokens) {    
                if( c == "+") {
                    int a  =  st.top() ; 
                    st.pop() ;
                    int b  = st.top() ; 
                    st.pop() ; 
                    int add  = a + b  ; 
                    st.push(add) ; 
                }else if( c == "*") {
                    int a =  st.top()  ;
                    st.pop() ; 
                    int b  = st.top() ;
                    st.pop() ; 
                    int mul  = a * b  ; 
                    st.push(mul) ;
                }else if( c == "-") {
                    int a =  st.top() ; 
                    st.pop() ; 
                    int b  = st.top() ; 
                    st.pop() ; 
                    int sub  = b - a  ;
                    st.push(sub) ;
                } else if( c == "/") {
                    int a  = st.top() ; 
                    st.pop() ; 
                    int b = st.top() ; 
                    st.pop() ; 
                    int div  = b /a ; 
                    st.push(div) ;
                }else {
                    int val = stoi(c) ; 
                    st.push(val) ;
                }
            }   
        return  st.top() ;
    }  
    
};

