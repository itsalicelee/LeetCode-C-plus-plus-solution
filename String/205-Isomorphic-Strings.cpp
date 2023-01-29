class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        set<char> set;
        unordered_map<char, char> map;  // s->t
        for(size_t i = 0; i < s.size(); ++i){
            if(map.find(s[i]) == map.end() && set.find(t[i]) == set.end()){  // first appearence
                map[s[i]] = t[i];  // map[e] = a, map[g] = d
                set.insert(t[i]);
            }
        }
        for(size_t i = 0; i < s.size(); ++i){
            s[i] = map[s[i]];
        }

        std::cout << s << " " << t << std::endl;
        return s == t;
    }
};
