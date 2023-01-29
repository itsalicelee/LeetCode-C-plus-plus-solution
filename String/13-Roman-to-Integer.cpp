class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        size_t i = 0;
        while(i <= s.size()){
            if(i + 1 <= s.size()){
                if(s[i] == 'I' && s[i+1] == 'V'){
                    result += 4;
                    i += 2;
                    continue;
                }
                else if(s[i] == 'I' && s[i+1] == 'X'){
                    result += 9;
                    i += 2;
                    continue;
                }
                else if(s[i] == 'X' && s[i+1] == 'L'){
                    result += 40;
                    i += 2;
                    continue;
                }
                else if(s[i] == 'X' && s[i+1] == 'C'){
                    result += 90;
                    i += 2;
                    continue;
                }
                else if(s[i] == 'C' && s[i+1] == 'D'){
                    result += 400;
                    i += 2;
                    continue;
                }
                else if(s[i] == 'C' && s[i+1] == 'M'){
                    result += 900;
                    i += 2;
                    continue;
                }
            }  // end of subtraction

            switch(s[i]){
                case 'I':
                    result += 1;
                    break;
                case 'V':
                    result += 5;
                    break;
                case 'X':                    
                    result += 10;
                    break;
                case 'L':                    
                    result += 50;
                    break;
                case 'C':                    
                    result += 100;
                    break;
                case 'D':                    
                    result += 500;
                    break;
                case 'M':                    
                    result += 1000;
                    break;
            }
            i += 1;          
        }
        return result;
    }
};
