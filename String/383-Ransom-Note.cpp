class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(size_t i = 0; i < ransomNote.size(); ++i){
            size_t result = magazine.find(ransomNote[i]);
            
            if(result == string::npos){
                return false;
            }
            else{
                magazine.erase(result, 1);  // or magazine.erase(magazine.begin()+result);
            }
        }
        return true;
    }
};
