class Solution {
public:
    string addBinary(string a, string b) {
        std::reverse(a.begin(), a.end());
        std::reverse(b.begin(), b.end());
        if(a.size() <= b.size()){  // fill up zeros make a and b the same size
            a = a + std::string((b.size() - a.size()), '0');   
        }
        else{
            b = b + std::string((a.size() - b.size()), '0');   
        }
        bool carry = false;
        std::string result;
        for(size_t i = 0; i < a.size(); ++i){
            if(a[i] == '0' && b[i] == '0'){
                if(carry == false){
                    result += std::string("0");    
                }
                else{
                    result += std::string("1");
                    carry = false;
                }
            }
            else if((a[i] == '0' && b[i] == '1') || (a[i] == '1' && b[i] == '0')){
                if(carry == false){
                    result += std::string("1");
                }
                else{
                    result += std::string("0");
                    carry = true;
                }
            }
            else if(a[i] == '1' && b[i] == '1'){
                if(carry == false){
                    result += std::string("0");
                    carry = true;
                }
                else{
                    result += std::string("1");
                    carry = true;
                }
            }
        }
        if(carry == true){
            result += std::string("1");
        }
        std::reverse(result.begin(), result.end());      
        return result;
    }
};
