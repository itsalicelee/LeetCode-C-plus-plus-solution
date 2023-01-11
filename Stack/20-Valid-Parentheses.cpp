class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(size_t i = 0; i < s.size(); ++i){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){  // push
                st.push(s[i]);
            }
            else{
                if((s[i] == ')' || s[i] == '}' || s[i] == ']') && st.size() == 0){ // nothing to pop
                    return false;
                }
                if(st.top() == '(' && s[i] == ')'){  //  need to pop
                    st.pop();
                }
                else if(st.top() == '{' && s[i] == '}'){
                    st.pop();
                }
                else if(st.top() == '[' && s[i] == ']'){
                    st.pop();                  
                }
                else{
                    return false;
                }
            }
        }
        if(st.size() == 0){
            return true;
        }
        return false; 
    }
};
