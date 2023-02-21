class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<char> nums;
        vector<char> chars = {'+', '-', '*', '/'};

        for(size_t i = 0; i < tokens.size(); ++i){
            if(chars.find(tokens[i]) != chars.end()){ // is operator
                char left = 
                if(tokens[i] == chars[0]){  // add 
                
                }
                else if(tokens[i] == chars[1]){  // subtract
                
                }
                else if(tokens[i] == chars[2]){  // mul
                }
                else if(tokens[i] == chars[3]){  // div
                }
            }
            else{  // is number
                nums.push(stoi(tokens[i]));
            }
            
        return 0;
    }
};
