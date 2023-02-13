class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::multimap<int, int> m;
        for(size_t i = 0; i < nums.size(); ++i){
            m.insert({nums[i], i});
        }
        int previousNum, previousIdx;
        for(auto i = m.begin(); i != m.end(); ++i){
            std::cout <<  i->first << " " << i->second << std::endl;
        }
        for(auto i = m.begin(); i != m.end(); ++i){
            if(i == m.begin()){
                previousNum = i->first;
                previousIdx = i->second;
            }
            else{
                if((previousNum == i->first) && (abs(previousIdx - i->second) <= k)){
                    return true;
                }
                previousNum = i->first;
                previousIdx = i->second;
            }
           
            
        }
        return false;
    }
};
