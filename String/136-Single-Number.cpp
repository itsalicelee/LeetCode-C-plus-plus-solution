class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        std::sort(nums.begin(), nums.end());
        size_t idx = 0;
        int result;
        while(idx < nums.size()){
            if(nums[idx] == nums[idx+1]){
                idx += 2;
            }
            else{
                result = nums[idx];
                break;
            }
        }
        return result;   
    }
};
