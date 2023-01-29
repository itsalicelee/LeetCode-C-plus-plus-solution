class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stack1;
        stack<char> stack2;
        for(size_t i = 0; i < s.size(); ++i){
            if(s[i] != '#'){
                stack1.push(s[i]);
            }
            else{
                if(stack1.size() != 0){  // check stack size before popping
                    stack1.pop();
                }
            }
        }
        for(size_t i = 0; i < t.size(); ++i){
            if(t[i] != '#'){
                stack2.push(t[i]);
            }
            else{
                if(stack2.size() != 0){ // check stack size before popping
                    stack2.pop();
                }
            }
        }
        if(stack1.size() != stack2.size()){
            return false;
        }
        // stack comparison
        while(stack1.size() != 0){
            if(stack1.top() != stack2.top()){
                return false;
            }
            stack1.pop();
            stack2.pop();
        }
        return true;
        
    }
};
