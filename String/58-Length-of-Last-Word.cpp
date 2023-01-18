#include <string>

class Solution {
public:
    int lengthOfLastWord(string s) {
      std::vector<std::string> result;
      const std::string deli = " ";
      std::string::size_type begin, end;
      
      end = s.find(deli);
      begin = 0;

      while(end != std::string::npos){
          if(end != begin){
              result.push_back(s.substr(begin, end-begin));
          }
          begin = end + deli.size();
          end = s.find(deli, begin);
      }
      if(begin != s.length()){  // no space after last word
          result.push_back(s.substr(begin));
      }

      for(size_t i = 0; i < result.size(); ++i){
          std::cout << result[i] << std::endl;
      }
      return result.back().size();
    }
};
