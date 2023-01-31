class Solution {
public:
    int missingNumber(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int ret = 0;
        for(size_t i = 0; i < nums.size(); ++i){
            if(ret == nums[i]){
                ++ret;
            }
            else{
                break;
            }
        }
        return ret;
    }
};