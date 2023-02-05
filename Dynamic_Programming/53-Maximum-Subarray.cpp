// - dp[i] is the maximum sub array until nums[i]
// - result = max(dp)
// - base case: dp[0] = nums[0]
// - dp[i] = nums[i] + max(0, dp[i-1])
// - max element returns the pointer


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> result(nums.size(), 0);
        result[0] = nums[0];
        for(size_t i = 1; i < nums.size(); ++i){
            result[i] = nums[i] + max(0, result[i-1]);
        }
        int ret = *max_element(result.begin(), result.end());
        return ret;
    }
};
