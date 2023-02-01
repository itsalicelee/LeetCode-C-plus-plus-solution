class Solution {
public:
    bool isPalindrome(int x) {
        std::string s = std::to_string(x);
        int start = 0;
        int end = s.size()-1;
        while(start <= end){
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
