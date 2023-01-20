class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, size_t> counter;
        for(size_t i = 0; i < s.size(); ++i){
            if(counter.find(s[i]) == counter.end()){
                counter[s[i]] = 1;
            }
            else{
                counter[s[i]] += 1;
            }
        }
        int ones_cnt = 0;
        int result = 0;
        bool hasOdd = false;
        for(auto i = counter.begin(); i != counter.end(); ++i){
            if(i->second % 2 == 0){
                result += i->second;
            }
            else{
                result += (i->second -1);  // make it even
                hasOdd = true;
            }
        }
        if(hasOdd == true){
            result += 1;
        }

        return result;
    }
};
