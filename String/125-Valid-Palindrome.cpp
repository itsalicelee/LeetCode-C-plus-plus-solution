class Solution {
public: 
    static bool isAlphanumeric(char c){
    return !((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z'));
    }

    bool isPalindrome(string s) {
        auto newEnd = remove_if(s.begin(), s.end(), isAlphanumeric);
        if(s.begin() == newEnd){  // if new string is empty
            return true;
        }
        auto end = newEnd -= 1;
        for(auto i = s.begin(); i != newEnd; ++i, --end){
            if (std::tolower(*i) != std::tolower(*end)){
                return false;
            }
        }
        return true;
    }
};
