class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        std::vector<int> result;
        bool carry = false;
        int num = 0;
        std::reverse(digits.begin(), digits.end());
        for(size_t i = 0; i < digits.size(); ++i){
            if (i == 0){
                num = digits[i] + 1;
                if(num == 10){
                    num = 0;
                    carry = true;
                }
            }
            else{
                if(carry == false){
                    num = digits[i];
                }
                else{
                    num = digits[i] + 1;
                    carry = false;
                    if(num == 10){
                        num = 0;
                        carry = true;
                    }
                }
            }
            result.push_back(num);
        }
        if(carry == true){
            result.push_back(1);
        }
        std::reverse(result.begin(), result.end());
        return result;
        
    }
};
