class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        else{
            std::sort(s.begin(), s.end());
            std::sort(t.begin(), t.end());
            for(size_t i = 0; i < s.size(); ++i){
                if(s[i] != t[i]){
                    return false;
                }
            }
        }
        return true;
    }
};
