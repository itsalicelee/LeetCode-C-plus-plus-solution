#include<cmath>
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for(size_t i = 0; i < columnTitle.size(); ++i){
            char c = columnTitle[i];
            // std::cout << (c - 64) * std::pow(26, columnTitle.size()-i) << std::endl;
            result += (c - 64) * std::pow(26, columnTitle.size()-i-1);
        }
        return result;
    }
};
