# include <iostream>
using namespace std;

// i: left pointer
// j: right pointer

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        unordered_map<char, int> m;
        int i = 0;
        for(int j = 0; j < s.size(); ++j){  // right pointer
            m[s[j]]++;
            while(m[s[j]] > 1){ // move the left pointer right
                m[s[i]]--;
                i++;
            }
            res = max(res, j - i + 1);
        }
        return res;
    }
};
