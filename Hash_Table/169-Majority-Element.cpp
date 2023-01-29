class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        unordered_map<int, size_t> map;
        int threshold = nums.size()/2;
        int result;
        if(nums.size() == 1){
            return nums[0];
        }
        for(size_t i = 0; i < nums.size(); ++i){
            // appear first time
            if(map.find(nums[i]) == map.end()){
                map[nums[i]] = 1;
            }
            else{
                map[nums[i]] += 1;
                if(map[nums[i]] > threshold){
                    result = nums[i];
                    break;
                }
            }
        }
        
        return result;
    }
};
