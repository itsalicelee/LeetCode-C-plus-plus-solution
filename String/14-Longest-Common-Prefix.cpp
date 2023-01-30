class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ret = "";
        if(strs.size() == 1){
            return strs[0];
        }
        int j = 0;
        
        while(true){
             for(size_t i = 1; i < strs.size(); i++){
                if(strs[i][j] != strs[i-1][j] || strs[i].size() <= j){
                    return ret;
                }
                if(i == strs.size()-1){
                    ret += strs[i][j];
                    j = j + 1;
                }
            }
        }
       
        return ret;
    }
};
