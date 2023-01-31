class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(size_t i = 0; i < nums.size(); ++i){
            nums[i] = pow(nums[i], 2);
        }
        std::sort(nums.begin(), nums.end());
        return nums;
    }
};